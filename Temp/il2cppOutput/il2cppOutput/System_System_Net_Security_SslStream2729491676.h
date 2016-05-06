#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t589897109;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t4087051103;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2540829269;

#include "System_System_Net_Security_AuthenticatedStream2307454143.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t2729491676  : public AuthenticatedStream_t2307454143
{
public:
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t589897109 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t4087051103 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t2540829269 * ___selection_callback_5;

public:
	inline static int32_t get_offset_of_ssl_stream_3() { return static_cast<int32_t>(offsetof(SslStream_t2729491676, ___ssl_stream_3)); }
	inline SslStreamBase_t589897109 * get_ssl_stream_3() const { return ___ssl_stream_3; }
	inline SslStreamBase_t589897109 ** get_address_of_ssl_stream_3() { return &___ssl_stream_3; }
	inline void set_ssl_stream_3(SslStreamBase_t589897109 * value)
	{
		___ssl_stream_3 = value;
		Il2CppCodeGenWriteBarrier(&___ssl_stream_3, value);
	}

	inline static int32_t get_offset_of_validation_callback_4() { return static_cast<int32_t>(offsetof(SslStream_t2729491676, ___validation_callback_4)); }
	inline RemoteCertificateValidationCallback_t4087051103 * get_validation_callback_4() const { return ___validation_callback_4; }
	inline RemoteCertificateValidationCallback_t4087051103 ** get_address_of_validation_callback_4() { return &___validation_callback_4; }
	inline void set_validation_callback_4(RemoteCertificateValidationCallback_t4087051103 * value)
	{
		___validation_callback_4 = value;
		Il2CppCodeGenWriteBarrier(&___validation_callback_4, value);
	}

	inline static int32_t get_offset_of_selection_callback_5() { return static_cast<int32_t>(offsetof(SslStream_t2729491676, ___selection_callback_5)); }
	inline LocalCertificateSelectionCallback_t2540829269 * get_selection_callback_5() const { return ___selection_callback_5; }
	inline LocalCertificateSelectionCallback_t2540829269 ** get_address_of_selection_callback_5() { return &___selection_callback_5; }
	inline void set_selection_callback_5(LocalCertificateSelectionCallback_t2540829269 * value)
	{
		___selection_callback_5 = value;
		Il2CppCodeGenWriteBarrier(&___selection_callback_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
