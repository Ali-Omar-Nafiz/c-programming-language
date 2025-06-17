#include <iostream>
using namespace std;

// Enum with custom values
enum ErrorCode {
    Success = 200,
    NotFound = 404,
    ServerError = 500,
    Unauthorized = 401
};

int main() {
    // Declare an error code
    ErrorCode code;

    // Assign a user-defined enum value
    code = NotFound;

    // Print the corresponding message
    switch (code) {
        case Success:
            cout << "Success! Code: " << Success << endl;
            break;
        case NotFound:
            cout << "Error: Not Found. Code: " << NotFound << endl;
            break;
        case ServerError:
            cout << "Error: Server Error. Code: " << ServerError << endl;
            break;
        case Unauthorized:
            cout << "Error: Unauthorized Access. Code: " << Unauthorized << endl;
            break;
        default:
            cout << "Unknown error code." << endl;
    }

    return 0;
}

