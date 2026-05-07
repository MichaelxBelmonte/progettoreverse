// Function: FUN_01c66870
// Address: 01c66870
// Size: 1494 bytes
// Class: GNString


void FUN_01c66870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  pthread_key_t pVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong local_d0;
  char local_c8;
  undefined1 uVar11;
  longlong local_b0;
  undefined1 local_a8;
  longlong *local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  local_88 = param_1;
  uVar10 = (**(code **)(*unaff_RDI + 0x620))();
  *(undefined1 *)(unaff_RDI + 0x3a) = 1;
  if ((int)unaff_RDI[0x39] == 0) {
    local_80 = unaff_RDI + 0x54;
    lVar1 = unaff_RDI[0x54];
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      lVar4 = unaff_RDI[0x31];
      if (lVar4 != 0) {
        FUN_00d50b00();
        lVar1 = *local_80;
      }
      lVar1 = *(longlong *)(lVar1 + 0x18);
      local_60 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = unaff_RDI[0x31];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c2660();
      local_68 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      plVar3 = (longlong *)FUN_000bea40();
      (**(code **)(*plVar3 + 0x18))();
      if (local_68 != (longlong *)0x0) {
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = local_68;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar7 = -local_40._4_4_;
            }
            else {
              iVar7 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar7);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar7 = 0;
            }
            local_40 = CONCAT44(iVar7,(int)local_40);
          }
          lVar4 = (longlong)(int)local_40;
          iVar7 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar7) break;
          lVar6 = local_48[2];
          local_58 = *(longlong **)(lVar6 + 8 + lVar4 * 8);
          pvVar2 = _pthread_getspecific((pthread_key_t)lVar6);
          pVar5 = (pthread_key_t)lVar6;
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_88 = FUN_01907950();
          pvVar2 = _pthread_getspecific(pVar5);
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            pVar5 = (pthread_key_t)local_60;
          }
          local_90 = FUN_016c25f0(local_88);
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = FUN_016c26c0(local_90);
          pvVar2 = _pthread_getspecific(pVar5);
          plVar8 = plVar3;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x418))(local_90,local_88);
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_000beb10();
      }
      local_98 = '\0';
      local_a0 = plVar3;
      (**(code **)(**(longlong **)(*local_80 + 0x30) + 0x3f8))();
      lVar4 = local_60;
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0x2c] != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        plVar3 = (longlong *)unaff_RDI[0x2c];
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x620))();
        FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (unaff_RDI[0x2d] == 0) {
      plVar3 = *(longlong **)(*local_80 + 0x28);
      goto joined_r0x01c66e4a;
    }
    FUN_00d50b00();
    FUN_00d50b20();
    plVar3 = (longlong *)unaff_RDI[0x2d];
    FUN_00d50b00();
    plVar8 = (longlong *)unaff_RDI[0x2d];
    FUN_00d50b00();
    (**(code **)(*plVar8 + 0xf08))();
    uVar9 = (**(code **)(*plVar3 + 0x938))();
    *(undefined4 *)((longlong)unaff_RDI + 0x254) = uVar9;
    FUN_00d50b20();
    FUN_00d50b20();
    plVar3 = local_80;
  }
  else {
    if (unaff_RDI[0x2d] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = unaff_RDI[0x2d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d470c0(local_88);
      local_78 = local_58;
      local_70 = 0;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_70 = '\x01';
      uVar10 = FUN_019f1280();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (lVar1 != 0) {
        uVar10 = FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(unaff_RDI[0x54] + 0x18);
    if (lVar1 != 0) {
      uVar10 = FUN_00d50b00();
    }
    uVar11 = 1;
    lVar4 = unaff_RDI[0x31];
    if (lVar4 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a8 = 1;
    local_b0 = lVar4;
    FUN_01c64c20(uVar10,&local_b0,param_3,param_4,uVar11);
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    plVar3 = unaff_RDI + 0x54;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar3 = *(longlong **)(*plVar3 + 0x28);
joined_r0x01c66e4a:
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x3a0))();
    (**(code **)(*local_58 + 0x410))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


