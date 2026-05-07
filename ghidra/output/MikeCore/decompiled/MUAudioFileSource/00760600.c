// Function: FUN_00760600
// Address: 00760600
// Size: 3009 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x00760b70) */
/* WARNING: Removing unreachable block (ram,0x00760b7c) */
/* WARNING: Removing unreachable block (ram,0x007609ec) */
/* WARNING: Removing unreachable block (ram,0x007609f8) */
/* WARNING: Removing unreachable block (ram,0x00760759) */
/* WARNING: Removing unreachable block (ram,0x00760765) */
/* WARNING: Removing unreachable block (ram,0x00760cb3) */
/* WARNING: Removing unreachable block (ram,0x00760cbf) */
/* WARNING: Removing unreachable block (ram,0x00761096) */
/* WARNING: Removing unreachable block (ram,0x007610a2) */
/* WARNING: Removing unreachable block (ram,0x007611b2) */
/* WARNING: Removing unreachable block (ram,0x00761109) */
/* WARNING: Removing unreachable block (ram,0x00761112) */
/* WARNING: Removing unreachable block (ram,0x00760c0f) */
/* WARNING: Removing unreachable block (ram,0x00760c1c) */
/* WARNING: Removing unreachable block (ram,0x00761163) */
/* WARNING: Removing unreachable block (ram,0x00761170) */
/* WARNING: Removing unreachable block (ram,0x00760bd9) */
/* WARNING: Removing unreachable block (ram,0x00760be6) */
/* WARNING: Removing unreachable block (ram,0x00760c33) */
/* WARNING: Removing unreachable block (ram,0x00760c38) */
/* WARNING: Removing unreachable block (ram,0x007611bb) */
/* WARNING: Removing unreachable block (ram,0x007608c7) */
/* WARNING: Removing unreachable block (ram,0x007608f0) */
/* WARNING: Removing unreachable block (ram,0x007608c9) */
/* WARNING: Removing unreachable block (ram,0x007608f2) */
/* WARNING: Removing unreachable block (ram,0x00760e97) */
/* WARNING: Removing unreachable block (ram,0x00760e4d) */
/* WARNING: Removing unreachable block (ram,0x00760e56) */
/* WARNING: Removing unreachable block (ram,0x00760f42) */
/* WARNING: Removing unreachable block (ram,0x00760f4b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00760600(pthread_key_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *unaff_RDI;
  bool bVar14;
  undefined4 uVar15;
  undefined1 local_180 [8];
  undefined1 local_178;
  longlong local_100;
  char local_f8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x628))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_004a5a00();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar8 = DAT_026f6fb0;
  if (cVar3 == '\0') {
    if (DAT_026f6fb0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02729530;
    if (DAT_02729530 != 0) {
      FUN_00d50b00();
    }
    FUN_01f6ca30();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    FUN_01f6c9b0();
    (**(code **)(*local_68 + 0x5e0))();
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar10 = 0x2572358;
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  local_d0 = puVar7;
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x760))();
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00757c60();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar15 = FUN_012cb480();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if (local_68 != (longlong *)0x0) {
    local_50 = -1;
    while( true ) {
      lVar8 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((longlong)local_68 + 0xc) <= local_50) break;
      plVar12 = *(longlong **)(local_68[2] + 8 + lVar8 * 8);
      local_40 = plVar12;
      if ((DAT_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
        _DAT_026e3230 = FUN_00136df0;
        _DAT_026e3240 = 0;
        uRam00000000026e3248 = 0;
        _DAT_026e3250 = 0;
        uRam00000000026e3258 = 0;
        _DAT_026e3260 = 0;
        uRam00000000026e3268 = 0;
        _DAT_026e3270 = 0;
        uRam00000000026e3278 = 0;
        _DAT_026e3280 = 0;
        uRam00000000026e3288 = 0;
        _DAT_026e3290 = 0;
        uRam00000000026e3298 = 0;
        _DAT_026e32a0 = 0;
        uRam00000000026e32a8 = 0;
        _DAT_026e32b0 = 0;
        uRam00000000026e32b8 = 0;
        _DAT_026e32c0 = 0;
        uRam00000000026e32c8 = 0;
        _DAT_026e32d0 = 0;
        uRam00000000026e32d8 = 0;
        _DAT_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar11 = (longlong **)&DAT_02802688;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar11 = &local_40;
        if (cVar3 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
      puVar7 = local_d0;
      if (*pplVar11 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific((pthread_key_t)pplVar11);
        plVar9 = plVar12;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar9 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar9 + 0x478))();
        (**(code **)(*local_78 + 0x3f0))();
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_38 = '\0';
          local_40 = plVar12;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    plVar12 = local_68;
    FUN_00136d50();
    pVar10 = (pthread_key_t)plVar12;
    uVar15 = FUN_00d50b20();
  }
  if (*(int *)((longlong)puVar7 + 0xc) != 0) {
    local_178 = 0;
    FUN_00761a80(uVar15,local_180);
  }
  FUN_00da5ad0();
  plVar12 = local_40;
  bVar14 = local_38 != '\0';
  if (bVar14) {
    local_38 = '\0';
  }
  FUN_00da7170();
  FUN_00da7180();
  plVar9 = local_68;
  if (plVar12 != (longlong *)0x0) {
    FUN_01823d20();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar3 = FUN_01823e80();
    plVar9 = (longlong *)CONCAT71((int7)((ulonglong)local_68 >> 8),1);
    if (cVar3 != '\0') {
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar9 + 0x18))();
      (**(code **)(*unaff_RDI + 0x628))();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar15 = FUN_004a1110();
      local_a0 = 0;
      plVar9 = DAT_02729538;
      if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
        uVar15 = FUN_00d50b00();
        plVar9 = DAT_02729538;
      }
      local_a0 = '\x01';
      local_a8 = local_78;
      DAT_02729538 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        local_a0 = '\x01';
        uVar15 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar9;
      FUN_00ca0840(uVar15,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = (**(code **)(*unaff_RDI + 0x628))();
      local_90 = 0;
      if (local_78 != (longlong *)0x0) {
        uVar15 = FUN_00d50b00();
      }
      plVar9 = DAT_02729540;
      local_90 = '\x01';
      local_98 = local_78;
      if (DAT_02729540 != (longlong *)0x0) {
        local_90 = '\x01';
        uVar15 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar9;
      FUN_00ca0840(uVar15,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = unaff_RDI[0x18];
      if (lVar8 != 0) {
        local_c0 = 0;
        uVar15 = FUN_00d50b00();
        plVar9 = DAT_02729548;
        local_c0 = '\x01';
        local_c8 = lVar8;
        if (DAT_02729548 != (longlong *)0x0) {
          uVar15 = FUN_00d50b00();
        }
        local_40 = plVar9;
        local_38 = '\0';
        FUN_00ca0840(uVar15,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      local_b0 = 0;
      (**(code **)(unaff_RDI[0xb] + 0x10))();
      FUN_00d50b00();
      local_b0 = '\x01';
      local_e0 = 0;
      local_d8 = '\0';
      local_b8 = unaff_RDI + 0xb;
      uVar5 = FUN_01824e80(&local_e0,&local_b8);
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        (**(code **)(*local_b8 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar9 = (longlong *)((ulonglong)uVar5 ^ 1);
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((char)plVar9 != '\0') {
      if (((plVar12 != (longlong *)0x0) && (FUN_00da7180(), plVar12 != (longlong *)0x0)) && (bVar14)
         ) {
        FUN_00d50b20();
      }
      uVar13 = 0;
      goto joined_r0x00761120;
    }
    FUN_00da7180();
    if ((plVar12 != (longlong *)0x0) && (bVar14)) {
      FUN_00d50b20();
    }
  }
  uVar13 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
joined_r0x00761120:
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return uVar13 & 0xffffffff;
}


