// Function: FUN_012d4f10
// Address: 012d4f10
// Size: 2067 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x012d5228) */
/* WARNING: Removing unreachable block (ram,0x012d53e2) */
/* WARNING: Removing unreachable block (ram,0x012d5538) */
/* WARNING: Removing unreachable block (ram,0x012d5544) */
/* WARNING: Removing unreachable block (ram,0x012d5583) */
/* WARNING: Removing unreachable block (ram,0x012d558f) */
/* WARNING: Removing unreachable block (ram,0x012d56d3) */
/* WARNING: Removing unreachable block (ram,0x012d56df) */
/* WARNING: Removing unreachable block (ram,0x012d56ed) */
/* WARNING: Removing unreachable block (ram,0x012d56fd) */

void FUN_012d4f10(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar10;
  bool bVar11;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  longlong local_90;
  char local_88 [8];
  longlong local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong local_38;
  
  uVar3 = FUN_012dde10();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_012d4f81;
    }
LAB_012d4fe6:
    local_68 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    if (local_60 == 0) goto LAB_012d4fe6;
LAB_012d4f81:
    local_68 = 0;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      local_68 = 0;
      FUN_00e8b990();
    }
    local_68 = 0;
    cVar2 = FUN_01530ac0();
    param_1 = 0;
    local_68 = 0;
    if (cVar2 != '\0') {
      bVar1 = false;
      lVar5 = 0;
      goto LAB_012d512d;
    }
  }
  lVar5 = unaff_RDI[0x2f];
  if (*(int *)(lVar5 + 0xc) == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    if (local_88[0] == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88[0] = '\0';
    }
    FUN_000ba510();
    lVar5 = local_60;
    if (local_60 == 0) {
      bVar1 = false;
    }
    else if (local_58 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
      bVar1 = true;
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88[0] != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    bVar1 = true;
  }
LAB_012d512d:
  local_38 = lVar5;
  if (unaff_RDI[0x21] != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = unaff_RDI[0x21];
LAB_012d51cc:
    lVar5 = (longlong)(int)local_48;
    iVar8 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar8);
    if (iVar8 < *(int *)(local_50 + 0xc)) {
      local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar5 * 8);
      if (local_38 != 0) {
        local_88[0] = '\0';
        local_80 = local_38;
        local_78 = 0xffffffff;
        local_70 = 0;
        while( true ) {
          lVar5 = (longlong)(int)local_78;
          iVar8 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar8);
          if (*(int *)(local_80 + 0xc) <= iVar8) break;
          local_90 = *(longlong *)(*(longlong *)(local_80 + 0x10) + 8 + lVar5 * 8);
          FUN_01308710();
          lVar5 = CONCAT71(uStack_c7,local_c8);
          if ((local_c0 != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 == local_90) {
            FUN_000be170();
            bVar11 = local_48 < 0;
            bVar10 = false;
            uVar7 = local_48._4_4_;
            if (local_48._4_4_ != 0) goto LAB_012d518f;
            goto LAB_012d51cc;
          }
          if (local_78._4_4_ != 0) {
            if (local_78._4_4_ < 1) {
              iVar8 = -local_78._4_4_;
            }
            else {
              local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              iVar8 = 0;
            }
            local_78 = CONCAT44(iVar8,(int)local_78);
          }
        }
        FUN_000be170();
      }
      lVar5 = local_60;
      local_90 = local_60;
      local_88[0] = '\0';
      FUN_00d21140();
      if ((local_88[0] != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = local_48;
      uVar7 = ~local_48._4_4_;
      local_48 = CONCAT44(uVar7,(int)local_48);
      bVar11 = -1 < lVar5;
      bVar10 = uVar7 == 0;
      if (!bVar10) {
LAB_012d518f:
        if (bVar10 || bVar11) {
          iVar8 = -uVar7;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - uVar7);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar8 = 0;
        }
        local_48 = CONCAT44(iVar8,(int)local_48);
      }
      goto LAB_012d51cc;
    }
    FUN_01312d90();
  }
  if (local_38 != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = local_38;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if ((int)local_48._4_4_ < 1) {
          iVar8 = -local_48._4_4_;
        }
        else {
          iVar8 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar8);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar8 = 0;
        }
        local_48 = CONCAT44(iVar8,(int)local_48);
      }
      lVar5 = (longlong)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      if (*(int *)(local_50 + 0xc) <= iVar8) break;
      local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar5 * 8);
      if (unaff_RDI[0x21] != 0) {
        local_88[0] = '\0';
        local_90 = 0;
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = unaff_RDI[0x21];
        while( true ) {
          lVar5 = (longlong)(int)local_78;
          iVar8 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar8);
          if (*(int *)(local_80 + 0xc) <= iVar8) break;
          local_90 = *(longlong *)(*(longlong *)(local_80 + 0x10) + 8 + lVar5 * 8);
          FUN_01308710();
          lVar9 = local_60;
          lVar5 = CONCAT71(uStack_c7,local_c8);
          if ((local_c0 != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 == lVar9) {
            FUN_01312d90();
            goto LAB_012d535c;
          }
          if (local_78._4_4_ != 0) {
            if (local_78._4_4_ < 1) {
              iVar8 = -local_78._4_4_;
            }
            else {
              local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              iVar8 = 0;
            }
            local_78 = CONCAT44(iVar8,(int)local_78);
          }
        }
        FUN_01312d90();
      }
      if (*unaff_RSI == 0) {
LAB_012d5600:
        (**(code **)(*unaff_RDI + 0x660))();
      }
      else {
        FUN_00c9fe40();
        local_c8 = local_88[0];
        pcVar6 = local_88;
        if (local_88[0] == '\0') {
          pcVar6 = &local_c8;
        }
        *pcVar6 = '\0';
        if ((local_88[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (local_90 == 0) {
          lVar5 = 0;
          bVar11 = true;
        }
        else {
          if (local_c8 == '\0') {
            FUN_00d50b00();
          }
          bVar11 = false;
          lVar5 = local_90;
        }
        if (lVar5 == 0) goto LAB_012d5600;
        FUN_00ca13a0();
        FUN_012dd9c0();
        FUN_01308b50();
        local_88[0] = '\0';
        FUN_00d21140();
        if ((local_88[0] != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
        local_90 = lVar5;
        if (!bVar11) {
          FUN_00d50b20();
        }
      }
LAB_012d535c:
    }
    FUN_000be170();
  }
  lVar5 = unaff_RDI[0x21];
  if (lVar5 == 0) {
    lVar5 = local_38;
  }
  else {
    local_58 = '\0';
    local_60 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = lVar5;
    if (0 < *(int *)(lVar5 + 0xc)) {
      lVar9 = 0;
      do {
        local_60 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar9 * 8);
        FUN_01309f00();
        lVar9 = lVar9 + 1;
        local_48 = CONCAT44(local_48._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)(lVar5 + 0xc));
    }
    FUN_01312d90();
    lVar5 = local_38;
  }
  local_38 = lVar5;
  if ((char)local_68 == '\0') {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}


