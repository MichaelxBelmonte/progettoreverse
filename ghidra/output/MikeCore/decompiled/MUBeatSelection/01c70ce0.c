// Function: FUN_01c70ce0
// Address: 01c70ce0
// Size: 2020 bytes
// Class: MUBeatSelection


void FUN_01c70ce0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  longlong *local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  pthread_key_t local_74;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = unaff_RDI[0x31];
  local_58 = param_2;
  local_50 = param_1;
  pVar7 = in_ECX;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_b8 = lVar1;
  FUN_016cbba0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_48 = plVar3;
  cVar4 = FUN_016bf360();
  if (cVar4 == '\0') {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    uVar6 = FUN_016c45d0(local_50,0);
    uVar9 = extraout_XMM0_Qa;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    FUN_016bef80(uVar9,uVar6);
  }
  local_74 = in_ECX;
  local_70 = (longlong *)FUN_00e7bdb0();
  cVar4 = FUN_016bf4e0();
  if ((cVar4 == '\0') ||
     ((cVar4 = FUN_016bf4e0(), cVar4 == '\0' && (cVar4 = FUN_016bf360(), cVar4 != '\0')))) {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = *unaff_RSI;
    local_90 = '\0';
    local_88 = *local_58;
    local_80 = '\0';
    local_60 = 0;
    lVar2 = unaff_RDI[0x42];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    pVar7 = local_74 & 0xff;
    local_68 = lVar2;
    FUN_016c4850((undefined1)local_74,&local_88,&local_68,0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    cVar4 = FUN_016bf530();
    if (cVar4 == '\0') {
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016bf100();
      pVar7 = 0;
      local_58 = (longlong *)FUN_016c46a0(0,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar3 = (longlong *)unaff_RDI[0x2d];
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *plVar3 + 0x20))();
      (**(code **)(*local_40 + 0x60))(local_58);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01907d20();
    pVar7 = 0;
    FUN_016cb9d0(local_50,4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = *unaff_RSI;
    local_a0 = '\0';
    FUN_016f1400(local_50);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_00e7bdb0();
    local_40 = (longlong *)FUN_016c4760(uVar9,0);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00e7b970();
    local_70 = local_40;
    FUN_016bf010();
    plVar3 = (longlong *)unaff_RDI[0x2d];
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *plVar3 + 0x20))();
    (**(code **)(*local_40 + 0x60))(local_50);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if ((int)unaff_RDI[0x39] == 0) {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c44d20();
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_d0 = 1;
    local_d8 = plVar3;
    plVar8 = local_70;
    FUN_01c45410(local_70,&local_d8);
    pVar7 = (pthread_key_t)plVar8;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
    if ((local_70._4_4_ == 0) || (cVar4 = FUN_00e7c630(), cVar4 == '\0')) {
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar9 = FUN_01c44d20();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c0 = 1;
      local_c8 = plVar3;
      FUN_01c44700(uVar9,&local_c8);
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01c62c70();
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b00();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x620))();
  *(undefined1 *)(unaff_RDI + 0x3a) = 1;
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


