#include "quickjs_translator.h"

namespace rime {

QuickJSTranslator::QuickJSTranslator(const Ticket& ticket, an<qjs::Runtime> rt, an<qjs::Context> ctx)
    : Translator(ticket), rt_(rt), ctx_(ctx) {};

an<Translation> QuickJSTranslator::Query(const string& input, const Segment& segment) {
    return nullptr;
}

} // namespace rime