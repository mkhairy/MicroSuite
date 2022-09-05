#include <algorithm>
#include <fstream>
#include <math.h>
#include "server_helper.h"
#include <stdlib.h>

using namespace mlpack;
using namespace mlpack::cf;
using namespace mlpack::data;

std::mutex test;


void CreateDatasetFromFile(std::string dataset_file_name, 
        Matrix* dataset)
{   
    Load(dataset_file_name, *dataset);
    std::cout<< "size : " << dataset->n_rows << "\n";
    std::cout<< "size : " << dataset->n_cols << "\n";
    std::cout<< "size : " << dataset->n_elem << "\n";
}

void UnpackCFServiceRequest(const collaborative_filtering::CFRequest &request,
        Request* user_item)
{
    user_item->user = request.user();
    user_item->item = request.item();
}

void CalculateRating(const Request &user_item,
        CFType* cf,
        float* rating)
{
    *rating = cf->Predict(user_item.user, user_item.item);
}

void PackCFServiceResponse(const float rating,
        collaborative_filtering::CFResponse* reply)
{
    reply->set_rating(rating);
}
