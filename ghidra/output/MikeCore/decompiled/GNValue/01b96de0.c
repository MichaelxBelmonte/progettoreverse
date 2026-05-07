// Function: FUN_01b96de0
// Address: 01b96de0
// Size: 3459 bytes
// Class: GNValue
// String references:
//   "GNValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01b96de0(pthread_key_t param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  longlong **pplVar13;
  undefined4 uVar14;
  undefined8 local_120;
  ulonglong local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  char local_a0;
  ulonglong local_98;
  longlong *local_90;
  char local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if ((cVar2 == '\0') || (cVar2 = (**(code **)(*unaff_RDI + 0xa20))(), cVar2 == '\0')) {
    uVar11 = 0;
    goto LAB_01b96e4d;
  }
  (**(code **)(*unaff_RDI + 0x978))();
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  uVar3 = FUN_01b71a90();
  uVar11 = (ulonglong)uVar3;
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar3 & param_2) == 0) goto LAB_01b96e4d;
  plVar5 = (longlong *)FUN_00e7bdb0();
  local_98 = FUN_00e7bdb0();
  FUN_01caeae0();
  plVar12 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b96f18;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01b96f18:
    local_58 = plVar12;
    uVar14 = FUN_01d66da0();
    local_110 = DAT_027e2690;
    local_60 = plVar5;
    if (DAT_027e2690 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_108 = '\x01';
    pplVar13 = &local_40;
    FUN_000175c0(uVar14,&local_110);
    plVar12 = local_40;
    if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026d4348 = FUN_00d4fe50();
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      param_1 = 0x53cb0;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      ___cxa_guard_release();
    }
    if (plVar12 == (longlong *)0x0) {
LAB_01b96f9e:
      pplVar13 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01b96f9e;
    }
    plVar12 = *pplVar13;
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar13 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_01d66da0();
    local_100 = DAT_027652e0;
    if (DAT_027652e0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    pplVar13 = &local_40;
    FUN_000175c0(uVar14,&local_100);
    plVar5 = local_40;
    if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026d4348 = FUN_00d4fe50();
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      param_1 = 0x53cb0;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
LAB_01b97088:
      pplVar13 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01b97088;
    }
    plVar10 = *pplVar13;
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar13 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar12 == (longlong *)0x0) || (plVar10 == (longlong *)0x0)) {
      FUN_01e42030();
      if (local_40 == (longlong *)0x0) {
        cVar2 = '\0';
      }
      else {
        FUN_01e42030();
        FUN_01d8b200();
        if (local_50 == unaff_RDI) {
          cVar2 = (**(code **)(*unaff_RDI + 0x9d0))();
        }
        else {
          cVar2 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar5 = local_60;
      if (cVar2 != '\0') {
        plVar5 = (longlong *)(**(code **)(*unaff_RDI + 0x9d8))();
        local_98 = (**(code **)(*unaff_RDI + 0x9e0))();
      }
    }
    else {
      plVar5 = (longlong *)FUN_00dd6320();
      local_98 = FUN_00dd6320();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x988))();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar12 = (longlong *)0x0;
  if (unaff_RDI[0x3f] == 0) {
LAB_01b972f4:
    local_80 = 0;
    local_60 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = unaff_RDI[0x3f];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    plVar12 = &DAT_02802558;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    plVar10 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) goto LAB_01b972f4;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_60 = local_40;
    plVar10 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    param_1 = (pthread_key_t)plVar10;
    FUN_00d50b20();
  }
  if ((local_58 != (longlong *)0x0) && (*(int *)((longlong)local_58 + 0xc) != 0)) {
    FUN_01787610();
    local_68 = local_40;
    plVar12 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), plVar12 = local_68, local_38 != '\0')) &&
        (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    local_f0 = local_58;
    local_e8 = '\0';
    (**(code **)(*plVar12 + 0x370))();
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01787560();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    plVar12 = local_40;
    pvVar6 = _pthread_getspecific(param_1);
    plVar10 = local_40;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar12 = plVar10, lVar7 != 0)) {
      plVar12 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    FUN_017874b0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((ulonglong)plVar5 >> 0x20 == 0) && (local_98 >> 0x20 == 0)) {
      local_e0 = local_60;
      local_d8 = '\0';
      (**(code **)(*local_68 + 0x380))(plVar5,&local_e0,local_98,(int)unaff_RDI[0x43]);
      plVar10 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0xa48))();
        FUN_01b6d0d0();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar5);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = '\0';
        local_40 = (longlong *)0x0;
        FUN_0124f820();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = '\0';
        local_50 = (longlong *)0x0;
        local_ac = 0xffffffff;
        while( true ) {
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar5);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar12 = (longlong *)FUN_00e7bdb0();
          uVar8 = FUN_00e7bdb0();
          cVar2 = FUN_01252960(uVar8,plVar12,&local_50,&local_120);
          pVar9 = (pthread_key_t)uVar8;
          if (cVar2 == '\0') break;
          FUN_01b6d0d0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d51d20();
          plVar12 = local_a8;
          if (local_a0 == '\0') {
            if (local_a8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_40 = plVar12;
          local_38 = '\0';
          plVar5 = (longlong *)local_118;
          FUN_012502a0(local_118,local_120,1);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*unaff_RDI + 0xa50))();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_68 == (longlong *)0x0) goto LAB_01b97983;
      }
    }
    else {
      local_d0 = local_60;
      local_c8 = '\0';
      local_c0 = 0;
      local_b8 = '\0';
      uVar11 = (ulonglong)plVar5;
      (**(code **)(*local_68 + 0x378))(plVar5,&local_d0,local_98,&local_c0);
      plVar10 = local_40;
      pVar9 = (pthread_key_t)uVar11;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0xa48))();
        FUN_01b6d0d0();
        plVar12 = local_50;
        pvVar6 = _pthread_getspecific(pVar9);
        plVar1 = local_50;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar12 = plVar1, lVar7 != 0)) {
          plVar12 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        local_38 = '\0';
        local_40 = plVar10;
        FUN_012502a0(local_98,plVar5,(char)unaff_RDI[0x36]);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xa50))();
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
LAB_01b97983:
  if (((char)local_80 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01b96e4d:
  return uVar11 & 0xffffffff;
}


