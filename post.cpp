#include "post.h"
#include <QDebug>

Post::Post(QObject *parent) : QObject(parent),
    mStarred(false)
{

}

Post::Post(QJsonObject post, QObject *parent) : QObject(parent),
    mStarred(false)
{
    qDebug() << post;
}

Post::~Post()
{

}

