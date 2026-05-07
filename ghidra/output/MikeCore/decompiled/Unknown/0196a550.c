// Function: FUN_0196a550
// Address: 0196a550
// Size: 2648 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196a550(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  int in_EDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar9 [16];
  undefined4 in_XMM1_Dd;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_68;
  char local_60;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_44;
  longlong *local_40;
  char local_38;
  
  local_58._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2680400;
  *puVar3 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
  (*DAT_02680418)();
  FUN_01989f80();
  pvVar4 = _pthread_getspecific(pVar5);
  uStack_50 = in_XMM1_Dd;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
    uStack_50 = in_XMM1_Dd;
  }
  FUN_01259650();
  local_e8 = (**(code **)(*local_40 + 0x938))();
  uStack_e0 = extraout_XMM0_Qb;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar6 = (float)(**(code **)(*unaff_RDI + 0x4d8))();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar7 = (float)FUN_0125a2c0();
  if (NAN(fVar7)) {
    local_58._0_4_ = FUN_01964590();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    if (local_40 == (longlong *)0x0) {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58._0_4_ = FUN_0125a2c0();
    }
    else {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58._0_4_ = FUN_0152e000();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152e3a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (NAN((float)local_58._0_4_)) {
    FUN_01e3f820();
    local_58._0_4_ = (float)local_58._4_4_ * DAT_0239011c + extraout_XMM0_Db_00;
    uStack_4c = uStack_50;
  }
  else {
    uVar8 = FUN_0198a7d0();
    (**(code **)(*unaff_RDI + 0x4d8))();
    local_58._0_4_ = (undefined4)uVar8;
    local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_50 = (undefined4)extraout_XMM0_Qb_00;
    uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    local_58._0_4_ = (float)local_58._0_4_ - extraout_XMM0_Db;
  }
  FUN_01989f80();
  fVar7 = (float)(**(code **)(&UNK_00001418 + *local_40))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    FUN_01989f80();
    local_44 = (float)(**(code **)(*local_40 + 3000))();
    FUN_01989f80();
    fVar7 = (float)(**(code **)(&UNK_00001418 + *local_68))();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_44 = local_44 * ((DAT_02390124 - fVar7) * _DAT_0241b1f0 + DAT_023908e0);
    auVar9 = roundss(_local_58,_local_58,9);
    register0x00001204 = auVar9._4_12_;
    local_58._0_4_ = auVar9._0_4_ + DAT_023b1d84;
  }
  else {
    FUN_01989f80();
    local_44 = (float)(**(code **)(*local_40 + 3000))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_44 = local_44 * _DAT_0241b1ec;
  }
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0126ee50();
  auVar9._4_12_ = local_e8._4_12_;
  auVar9._0_4_ = (float)local_e8 - fVar6;
  if (cVar2 != '\0') {
    FUN_01989f80();
    cVar2 = (**(code **)((longlong)&dylib_command_00001220.dylib.current_version + *local_40))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      auVar9 = insertps(auVar9,ZEXT416((uint)(DAT_02390118 * local_44 + (float)local_58._0_4_ +
                                             DAT_023b1d84)),0x10);
      FUN_01d39b10(auVar9._0_8_,DAT_02394298);
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x3a0))();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      fVar6 = DAT_023b1608 + (float)local_58._0_4_;
      if (in_EDX != 2) {
        fVar6 = (float)local_58._0_4_;
      }
      FUN_01d48b40();
      local_44 = DAT_0239011c * local_44;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      plVar1 = (longlong *)*unaff_RSI;
      insertps(auVar9,ZEXT416((uint)((fVar6 - local_44) -
                                    *(float *)(&DAT_0241b228 + (ulonglong)(in_EDX == 2) * 4))),0x10)
      ;
      FUN_01d39b10();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x3a0))();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (in_EDX == 2) {
        FUN_01cfbc00();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d48b40();
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        plVar1 = (longlong *)*unaff_RSI;
        FUN_01d39b10();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(*plVar1 + 0x3a8))();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_01989f80();
  fVar6 = (float)(**(code **)(&UNK_00001418 + *local_40))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((fVar6 != DAT_02390124) || (NAN(fVar6) || NAN(DAT_02390124))) {
    FUN_01d48b40();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    FUN_01d48b40();
  }
  FUN_00d50b20();
  return;
}


