// Function: FUN_01665120
// Address: 01665120
// Size: 2002 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01665120(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uVar13;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  uint local_74;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  byte local_4a;
  undefined1 local_49;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  cVar3 = FUN_00e34250();
  if (cVar3 != '\0') {
    *(undefined1 *)(unaff_RDI + 0x106) = 1;
    if (*(char *)(unaff_RDI + 0x11c) != '\0') {
      FUN_0184a0e0();
    }
    goto LAB_016657f6;
  }
  uVar13 = FUN_00e33de0();
  local_a8 = DAT_027295d0;
  if (DAT_027295d0 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  pplVar10 = &local_40;
  FUN_000175c0(uVar13,&local_a8);
  plVar1 = local_40;
  if ((DAT_027048b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    param_1 = 0x18210;
    _DAT_026cd470 = FUN_00018210;
    _DAT_026cd480 = 0;
    uRam00000000026cd488 = 0;
    _DAT_026cd490 = 0;
    _DAT_026cd508 = 0;
    uRam00000000026cd510 = 0;
    _DAT_026cd518 = 0;
    DAT_026cd51a = 6;
    _DAT_026cd498 = 0;
    uRam00000000026cd4a0 = 0;
    _DAT_026cd4a8 = 0;
    uRam00000000026cd4b0 = 0;
    _DAT_026cd4b8 = 0;
    uRam00000000026cd4c0 = 0;
    _DAT_026cd4c8 = 0;
    uRam00000000026cd4d0 = 0;
    _DAT_026cd4d8 = 0;
    uRam00000000026cd4e0 = 0;
    _DAT_026cd4e8 = 0;
    uRam00000000026cd4f0 = 0;
    _DAT_026cd4f8 = 0;
    uRam00000000026cd500 = 0;
    DAT_026cd523 = 0;
    _DAT_026cd51b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_016651ee:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_016651ee;
  }
  local_70 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    FUN_013fb420();
    local_60 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    local_48 = local_40;
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (pthread_key_t)local_48;
    }
    FUN_0132d610();
    local_58 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (pthread_key_t)local_60;
    }
    FUN_0132d610();
    local_68 = local_40;
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    uVar11 = 0;
    if ((*(char *)(*unaff_RSI + 0xd5) == '\0') && (local_68 != (longlong *)0x0)) {
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = (pthread_key_t)local_68;
      }
      iVar6 = FUN_016c2e90();
      if (iVar6 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
        if (local_58 != (longlong *)0x0) {
          pvVar7 = _pthread_getspecific(param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = (pthread_key_t)local_58;
          }
          iVar6 = FUN_016c2e90();
          if (iVar6 != 0) {
            pvVar7 = _pthread_getspecific(param_1);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              param_1 = (pthread_key_t)local_58;
            }
            iVar6 = FUN_016c2e90();
            uVar11 = (uint)(iVar6 == 1);
          }
        }
      }
    }
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (pthread_key_t)local_48;
    }
    bVar4 = FUN_0134a950();
    bVar12 = local_68 != (longlong *)0x0;
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (pthread_key_t)local_48;
    }
    FUN_0132d900();
    plVar1 = local_40;
    local_4a = bVar4;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (pthread_key_t)local_60;
    }
    FUN_0132d900();
    plVar2 = local_40;
    local_74 = uVar11;
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = plVar2;
    local_90 = '\0';
    local_49 = FUN_01511080();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = plVar2;
    local_80 = '\0';
    uVar5 = FUN_01512000();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e8b990();
    FUN_00cafd20();
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db32a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0166dcf0(local_49,bVar12 & ~local_4a & (byte)local_74,uVar5);
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db32a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (longlong *)FUN_00e8b990();
    (**(code **)(*plVar9 + 0x3c8))();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_016657f6:
  *(undefined1 *)(unaff_RDI + 0x11c) = 0;
  if (*(longlong *)(unaff_RDI + 0x120) != 0) {
    *(undefined8 *)(unaff_RDI + 0x120) = 0;
    FUN_00d50b20();
  }
  return;
}


