// Function: FUN_00533b90
// Address: 00533b90
// Size: 2094 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533b90(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong unaff_RDI;
  undefined4 uVar11;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d3ecf0();
  FUN_00b34cb0();
  (**(code **)(*local_90 + 0x88))();
  plVar8 = local_58;
  plVar7 = local_68;
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != plVar7) {
    return;
  }
  local_78 = *(longlong *)(unaff_RDI + 0x110);
  if (local_78 == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00527070();
  local_a0 = local_58;
  local_98 = 0;
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_007932a0();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00788660();
  local_80 = local_58;
  if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x498))();
  FUN_00cafd20();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x498))();
  FUN_00cb1f10();
  FUN_00db3260();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0015d630();
  plVar7 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_00534331;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_00534331;
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  local_48 = plVar7;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar10 = -local_40._4_4_;
      }
      else {
        iVar10 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar10 = 0;
      }
      local_40 = CONCAT44(iVar10,(int)local_40);
    }
    lVar4 = (longlong)(int)local_40;
    iVar10 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar10);
    if (*(int *)((longlong)local_48 + 0xc) <= iVar10) break;
    plVar7 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
    local_58 = plVar7;
    local_68 = plVar7;
    if ((DAT_026fdd70 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = &local_68;
      if (cVar2 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = local_58;
    if (*pplVar6 != (longlong *)0x0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)pplVar6);
      plVar8 = local_58;
      pVar5 = (pthread_key_t)pplVar6;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar8, lVar4 != 0)) {
        plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar7 + 0x478))();
      uVar11 = (**(code **)(*local_90 + 0x388))();
      plVar7 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (longlong *)0x0) && (uVar11 = FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      local_e0 = plVar7;
      local_d8 = '\0';
      (**(code **)(*local_80 + 0x400))(uVar11,&local_e0);
      plVar8 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      cVar2 = (**(code **)(*plVar8 + 0x398))();
      if (cVar2 == '\0') {
LAB_00534120:
        plVar9 = local_58;
        pvVar3 = _pthread_getspecific(pVar5);
        plVar1 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar9 = plVar1, lVar4 != 0)) {
          plVar9 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        cVar2 = (**(code **)(*plVar9 + 0x498))();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b0 = plVar8;
          local_a8 = '\0';
          FUN_0123bf80();
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_d0 = plVar8;
        local_c8 = '\0';
        cVar2 = FUN_00b80190();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') goto LAB_00534120;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0124d450();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = plVar8;
        local_b8 = '\0';
        FUN_0123ab70();
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar8 = local_58;
        if (cVar2 == '\0') {
          pvVar3 = _pthread_getspecific(pVar5);
          plVar9 = local_58;
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar8 = plVar9, lVar4 != 0)) {
            plVar8 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x480))();
        }
      }
      FUN_00d50b20();
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00136d50();
  FUN_00d50b20();
LAB_00534331:
  (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x498))();
  FUN_00cb1f10();
  FUN_00db3270();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x498))();
  (**(code **)(*local_58 + 0x3c8))();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


