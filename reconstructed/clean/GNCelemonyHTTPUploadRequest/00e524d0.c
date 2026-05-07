// Function: FUN_00e524d0
// Address: 00e524d0
// Size: 1788 bytes
// Class: GNCelemonyHTTPUploadRequest
// String references:
//   "GNCelemonyHTTPUploadRequest"
//   "suspend"
//   "resume"
// === GNCelemonyHTTPUploadRequest properties ===
//                   _kvTypeInfos
//                   _excessKVTypeInfos
//                   _excessDataLength
//                   _excessDataLocation
//                   _typeInfos
//                   _pingInterval
//                   _licenseDictionary
//                   _serialNumberProductID
//                   _serialNumber
//                   _ilokSerialNumber
//                   _remainingDaysNeeded
//                   _remainingDays
//                   _demoRequestJob
//                   _licenseFileUpToDate
//                   _expirationDate


void FUN_00e524d0(void)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x38) == 0) {
    return;
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  plVar8 = (int64_t *)(this_ptr + 0x10);
  cVar4 = FUN_00d05bb0();
  puVar2 = PTR__objc_msgSend_024a9998;
  while( true ) {
    if (cVar4 == '\0') goto LAB_00e5281e;
    cVar4 = FUN_00e92370();
    if (cVar4 != '\0') break;
    if (*(int64_t *)(this_ptr + 0x38) == 0) {
LAB_00e525d9:
      if (*(char *)(this_ptr + 0x60) != '\0') goto LAB_00e525e1;
LAB_00e52620:
      FUN_00e92450();
      cVar4 = FUN_00dee5a0((int)g_023908d0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_00e92f90();
        (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x378))();
        plVar1 = *(int64_t **)(this_ptr + 0x10);
        if ((g_02786db8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_02786d08 = FUN_00e79220();
          g_02786cf0 = "GNCelemonyHTTPUploadRequest";
          g_02786cf8 = 0xe0;
          g_02786d00 = FUN_00e530b0;
          g_02786d10 = 0;
          ram_0000000002786d18 = 0;
          g_02786d20 = 0;
          g_02786d98 = 0;
          ram_0000000002786da0 = 0;
          g_02786da8 = 0;
          g_02786daa = 2;
          g_02786d28 = 0;
          ram_0000000002786d30 = 0;
          g_02786d38 = 0;
          ram_0000000002786d40 = 0;
          g_02786d48 = 0;
          ram_0000000002786d50 = 0;
          g_02786d58 = 0;
          ram_0000000002786d60 = 0;
          g_02786d68 = 0;
          ram_0000000002786d70 = 0;
          g_02786d78 = 0;
          ram_0000000002786d80 = 0;
          g_02786d88 = 0;
          ram_0000000002786d90 = 0;
          g_02786db3 = 0;
          g_02786dab = 0;
          ___cxa_guard_release();
        }
        plVar7 = &g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          plVar7 = plVar8;
          if (cVar4 == '\0') {
            plVar7 = &g_02802688;
          }
        }
        if (*plVar7 != 0) {
          FUN_00d50b00();
          FUN_00dd9100();
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*plVar8 + 0x388))();
      }
    }
    else {
      cVar4 = FUN_00e92480();
      if (cVar4 == '\0') {
        if (*(char *)(this_ptr + 0x60) != '\0') {
          *(void*)(this_ptr + 0x60) = 0;
          (*puVar2)();
          goto LAB_00e525d9;
        }
        goto LAB_00e52620;
      }
      if (*(char *)(this_ptr + 0x60) == '\0') {
        (*puVar2)();
        *(void*)(this_ptr + 0x60) = 1;
      }
LAB_00e525e1:
      FUN_00da5ad0();
      FUN_00da68a0((int)g_023934c8);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    cVar4 = FUN_00d05bb0();
  }
  (*PTR__objc_msgSend_024a9998)();
  cVar4 = FUN_00d05bb0();
  while (cVar4 != '\0') {
    FUN_00e92450();
    FUN_00dee5a0((int)g_023908c8);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = FUN_00d05bb0();
  }
LAB_00e5281e:
  (*PTR__objc_release_024a99a0)();
  FUN_00e514e0();
  if (*(char *)(this_ptr + 0x7c) != '\0') {
    FUN_00e92330();
    lVar6 = g_02786c10;
    if (g_02786c10 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02786c18;
    if (g_02786c18 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    FUN_00e97060(g_025908a0,&local_90);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e92490();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00e52af9;
  }
  if (*(char *)(this_ptr + 0x48) == '\0') {
    if (*(int64_t *)(this_ptr + 0x68) == 0) {
      FUN_00e92f90();
      lVar6 = **(int64_t **)(this_ptr + 0x10);
    }
    else {
      FUN_00e92f90();
      lVar6 = **(int64_t **)(this_ptr + 0x10);
    }
    (**(code **)(lVar6 + 0x378))();
    plVar1 = (int64_t *)*plVar8;
    if ((g_02786db8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_02786d08 = FUN_00e79220();
      g_02786cf0 = "GNCelemonyHTTPUploadRequest";
      g_02786cf8 = 0xe0;
      g_02786d00 = FUN_00e530b0;
      g_02786d10 = 0;
      ram_0000000002786d18 = 0;
      g_02786d20 = 0;
      g_02786d98 = 0;
      ram_0000000002786da0 = 0;
      g_02786da8 = 0;
      g_02786daa = 2;
      g_02786d28 = 0;
      ram_0000000002786d30 = 0;
      g_02786d38 = 0;
      ram_0000000002786d40 = 0;
      g_02786d48 = 0;
      ram_0000000002786d50 = 0;
      g_02786d58 = 0;
      ram_0000000002786d60 = 0;
      g_02786d68 = 0;
      ram_0000000002786d70 = 0;
      g_02786d78 = 0;
      ram_0000000002786d80 = 0;
      g_02786d88 = 0;
      ram_0000000002786d90 = 0;
      g_02786db3 = 0;
      g_02786dab = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_00e529e9:
      plVar8 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00e529e9;
    }
    if (*plVar8 != 0) {
      FUN_00d50b00();
      FUN_00dd9100();
      FUN_00d50b20();
    }
  }
  plVar8 = *(int64_t **)(this_ptr + 0x10);
  local_58 = 0;
  lVar6 = *(int64_t *)(this_ptr + 0x68);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_60 = lVar6;
  (**(code **)(*plVar8 + 0x370))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *(int64_t *)(this_ptr + 0x50);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar6;
  FUN_00e92550();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e92310();
  FUN_00e92330();
  local_70 = *(int64_t *)(this_ptr + 0x40);
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_00e92490();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_00e52af9:
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x3b0))();
  return;
}

