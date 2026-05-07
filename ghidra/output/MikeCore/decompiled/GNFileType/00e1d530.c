// Function: FUN_00e1d530
// Address: 00e1d530
// Size: 775 bytes
// Class: GNFileType


/* WARNING: Removing unreachable block (ram,0x00e1d5a8) */
/* WARNING: Removing unreachable block (ram,0x00e1d5b4) */

undefined8 FUN_00e1d530(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *unaff_RDI;
  longlong *local_98;
  char local_90;
  
  if (*unaff_RDI == 0) {
    uVar3 = 0;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_024a9998)();
    uVar3 = _objc_autorelease();
    FUN_00df0520();
    if ((local_90 == '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02764110;
    if (DAT_02764110 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_aifc_audio);
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_aiff_audio);
    }
    lVar1 = DAT_027640d0;
    if (DAT_027640d0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_com_microsoft_waveform_audio);
    }
    lVar1 = DAT_02764158;
    if (DAT_02764158 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_mp3);
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_mpeg_4_audio);
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_com_apple_coreaudio_format);
    }
    lVar1 = DAT_027641b8;
    if (DAT_027641b8 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_com_digidesign_sd2_audio);
    }
    lVar1 = DAT_027641e0;
    if (DAT_027641e0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_mp3);
    }
    lVar1 = DAT_02764208;
    if (DAT_02764208 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_98 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)(param_1,&cf_public_ulaw_audio);
    }
    FUN_00d50b20();
  }
  return uVar3;
}


