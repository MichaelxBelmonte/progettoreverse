// Function: FUN_017098a0
// Address: 017098a0
// Size: 1604 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x01709bce) */
/* WARNING: Removing unreachable block (ram,0x01709bda) */

void FUN_017098a0(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *unaff_RDI;
  uint uVar11;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 *local_98;
  undefined8 *local_80;
  char local_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  pcVar1 = DAT_02572370;
  if ((undefined8 *)*unaff_RDI != (undefined8 *)0x0) {
    local_78[0] = '\0';
    local_80 = (undefined8 *)0x0;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    local_70 = (undefined8 *)*unaff_RDI;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar10 = -local_68._4_4_;
        }
        else {
          iVar10 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar10);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar10 = 0;
        }
        local_68 = CONCAT44(iVar10,(int)local_68);
      }
      lVar3 = (longlong)(int)local_68;
      iVar10 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar10) break;
      lVar7 = local_70[2];
      local_80 = *(undefined8 **)(lVar7 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      puVar5 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        puVar5 = (undefined8 *)local_80[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      lVar3 = puVar5[8];
      if (lVar3 == 0) {
        FUN_00d8ede0();
        if (local_b0 != '\0') goto LAB_017099f7;
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
        local_a8 = local_b8;
      }
      else {
        FUN_00d50b00();
        local_b8 = lVar3;
LAB_017099f7:
        local_b0 = '\0';
        local_a8 = local_b8;
      }
      FUN_0170a170();
      puVar5 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (undefined8 *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*pcVar1)();
        pvVar4 = _pthread_getspecific(pVar6);
        puVar9 = local_80;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          puVar9 = (undefined8 *)local_80[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        puVar9 = (undefined8 *)puVar9[8];
        if (puVar9 == (undefined8 *)0x0) {
          FUN_00d8ede0();
          local_98 = local_58;
          if (local_50 != '\0') goto LAB_01709b6f;
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = 0;
          FUN_00d50b00();
          local_58 = puVar9;
LAB_01709b6f:
          local_50 = '\0';
          local_98 = local_58;
        }
        FUN_0170a220();
        if (local_98 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_50 = '\0';
      local_58 = local_80;
      FUN_00d21140();
      if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      local_b8 = local_a8;
    }
    FUN_0170cbd0();
  }
  FUN_00ca1380();
  ppuVar8 = &local_58;
  if (local_78[0] != '\0') {
    ppuVar8 = (undefined8 **)local_78;
  }
  local_58 = (undefined8 *)CONCAT71(local_58._1_7_,local_78[0]);
  *(char *)ppuVar8 = '\0';
  if ((local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_58 == '\0') {
    if (local_80 == (undefined8 *)0x0) goto LAB_01709f15;
    FUN_00d50b00();
  }
  else if (local_80 == (undefined8 *)0x0) goto LAB_01709f15;
  local_78[0] = '\0';
  local_70 = local_80;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)((longlong)local_80 + 0xc)) {
    uVar11 = 0;
    do {
      local_48 = *(longlong *)(local_80[2] + (ulonglong)uVar11 * 8);
      if (*(int *)(local_48 + 0xc) < 2) {
        local_50 = '\0';
        local_58 = (undefined8 *)0x0;
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
          lVar3 = (longlong)(int)local_40;
          iVar10 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          if (*(int *)(local_48 + 0xc) <= iVar10) break;
          puVar5 = *(undefined8 **)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
          local_58 = puVar5;
          pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
          puVar9 = local_58;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), puVar5 = puVar9, lVar3 != 0)) {
            puVar5 = (undefined8 *)puVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          iVar10 = local_38 + (int)local_40;
          if (*(int *)(puVar5 + 9) != iVar10) {
            FUN_00d64850();
            *(int *)(puVar5 + 9) = iVar10;
            FUN_00d64910();
          }
        }
      }
      else {
        local_50 = '\0';
        local_58 = (undefined8 *)0x0;
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
          lVar3 = (longlong)(int)local_40;
          iVar10 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          if (*(int *)(local_48 + 0xc) <= iVar10) break;
          puVar5 = *(undefined8 **)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
          local_58 = puVar5;
          pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
          puVar9 = local_58;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), puVar5 = puVar9, lVar3 != 0)) {
            puVar5 = (undefined8 *)puVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          iVar10 = (int)local_40 + local_38 + 1;
          if (*(int *)(puVar5 + 9) != iVar10) {
            FUN_00d64850();
            *(int *)(puVar5 + 9) = iVar10;
            FUN_00d64910();
          }
        }
      }
      FUN_0170cbd0();
      uVar11 = uVar11 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar11);
    } while ((int)uVar11 < *(int *)((longlong)local_80 + 0xc));
  }
  FUN_0170cc70();
  FUN_00d50b20();
LAB_01709f15:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


