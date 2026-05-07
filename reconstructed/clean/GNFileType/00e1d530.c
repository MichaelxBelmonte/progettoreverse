// Function: FUN_00e1d530
// Address: 00e1d530
// Size: 775 bytes
// Class: GNFileType

uint64_t FUN_00e1d530(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t *this_ptr;
  int64_t *local_98;
  char local_90;
  
  if (*this_ptr == 0) {
    uVar3 = 0;
  }
  else {
    _objc_alloc();
    (*PTR__objc_msgSend_024a9998)();
    uVar3 = _objc_autorelease();
    FUN_00df0520();
    if ((local_90 == '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    lVar1 = g_02764110;
    if (g_02764110 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_public_aifc_audio);
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_public_aiff_audio);
    }
    lVar1 = g_027640d0;
    if (g_027640d0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_com_microsoft_waveform_audio);
    }
    lVar1 = g_02764158;
    if (g_02764158 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_public_mp3);
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_public_mpeg_4_audio);
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_com_apple_coreaudio_format);
    }
    lVar1 = g_027641b8;
    if (g_027641b8 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_com_digidesign_sd2_audio);
    }
    lVar1 = g_027641e0;
    if (g_027641e0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_public_mp3);
    }
    lVar1 = g_02764208;
    if (g_02764208 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*PTR__objc_msgSend_024a9998)(param_1,&cf_public_ulaw_audio);
    }
    FUN_00d50b20();
  }
  return uVar3;
}

