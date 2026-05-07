// Function: FUN_000c28c0
// Address: 000c28c0
// Size: 2572 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x000c2c0b) */

undefined8 * FUN_000c28c0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar10;
  undefined4 uVar11;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  char local_40 [8];
  longlong *local_38;
  
  plVar6 = (longlong *)unaff_RSI[0x2b];
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  local_110 = *param_2;
  local_108 = '\0';
  FUN_00c9fe40(uVar11,&local_110);
  plVar9 = local_68;
  local_78._0_1_ = local_60[0];
  plVar3 = &local_78;
  if (local_60[0] != '\0') {
    plVar3 = (longlong *)local_60;
  }
  *(undefined1 *)plVar3 = 0;
  if ((local_60[0] != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 == '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) goto LAB_000c32c7;
  plVar3 = plVar9;
  local_90 = plVar6;
  FUN_00751e50();
  pVar8 = (pthread_key_t)plVar3;
  local_88 = local_68;
  if (local_68 == (longlong *)0x0) {
    local_88 = plVar9;
  }
  else if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) &&
          (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0x720))();
  local_100 = local_88;
  local_f8 = '\0';
  (**(code **)(*local_68 + 0x5f0))();
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_88 + 0x498))();
  FUN_00cafd20();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_88 + 0x498))();
  FUN_00cb1f10();
  FUN_00db3260();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  FUN_00757c60();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  local_80 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar8 = (pthread_key_t)local_80;
  }
  FUN_01240660();
  plVar6 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_000c2be5;
    }
LAB_000c2cf0:
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar6[7] = 0;
    *plVar6 = (longlong)&DAT_024cbc70;
    *(undefined4 *)(plVar6 + 8) = 0;
    FUN_00d500e0();
    pvVar4 = _pthread_getspecific(pVar8);
    local_38 = plVar6;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar8 = (pthread_key_t)local_38;
    }
    FUN_0124a800();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f0 = local_38;
    local_e8 = '\0';
    FUN_01240690();
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01240920();
    FUN_00d23310();
    plVar9 = local_68;
    plVar6 = (longlong *)local_40;
    plVar3 = (longlong *)local_60;
    if (local_60[0] == '\0') {
      plVar3 = plVar6;
    }
    local_40[0] = local_60[0];
    *(undefined1 *)plVar3 = 0;
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] == '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
      FUN_00d50b20();
    }
    iVar10 = 0;
    while( true ) {
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar6);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar6 = local_38;
      }
      iVar2 = FUN_0124a860();
      pVar8 = (pthread_key_t)plVar6;
      if (iVar2 <= iVar10) break;
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_024cc370;
      puVar7[7] = 0;
      puVar7[8] = 0;
      FUN_00d500e0();
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fa90();
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fae0();
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = local_38;
      local_d8 = '\0';
      FUN_0123fb40();
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c8 = '\0';
      local_d0 = puVar7;
      FUN_01240230();
      if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      iVar10 = iVar10 + 1;
    }
    bVar1 = true;
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68 == (longlong *)0x0) goto LAB_000c2cf0;
LAB_000c2be5:
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar6;
    local_50 = 0xffffffff;
    local_48 = 0;
    while( true ) {
      lVar5 = (longlong)(int)local_50;
      iVar10 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      plVar6 = local_58;
      if (*(int *)((longlong)local_58 + 0xc) <= iVar10) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)local_58[2]);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar10 = FUN_0124a850();
      if (iVar10 == 0x24) {
        local_38 = local_68;
        plVar6 = (longlong *)0x0;
        if (local_68 != (longlong *)0x0) {
          plVar6 = local_68;
          if (local_60[0] == '\0') {
            FUN_00d50b00();
          }
          else {
            local_60[0] = '\0';
          }
          pVar8 = (pthread_key_t)plVar6;
          bVar1 = true;
          goto LAB_000c2cd4;
        }
        break;
      }
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar10 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar10 = 0;
        }
        local_50 = CONCAT44(iVar10,(int)local_50);
      }
    }
    pVar8 = (pthread_key_t)plVar6;
    bVar1 = false;
    local_38 = (longlong *)0x0;
LAB_000c2cd4:
    FUN_000e2ec0();
    FUN_00d50b20();
    if (local_38 == (longlong *)0x0) goto LAB_000c2cf0;
  }
  plVar6 = local_88;
  FUN_00757c60();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = local_38;
  local_b8 = '\0';
  FUN_012e8aa0();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x498))();
  FUN_00cb1f10();
  FUN_00db3270();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x498))();
  uVar11 = (**(code **)(*local_68 + 0x3c8))();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_b0 = *param_2;
  local_a8 = '\0';
  local_68 = plVar6;
  local_60[0] = '\0';
  FUN_00ca0840(uVar11,&local_b0);
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = *param_2;
  local_98 = '\0';
  (**(code **)(*plVar6 + 0x620))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_90;
  plVar9 = local_88;
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar9 = local_88;
  }
LAB_000c32c7:
  *unaff_RDI = plVar9;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  (**(code **)(*plVar6 + 0x378))();
  return unaff_RDI;
}


