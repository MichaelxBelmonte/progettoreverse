// Function: FUN_01dceb30
// Address: 01dceb30
// Size: 2004 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x01dcefa6) */
/* WARNING: Removing unreachable block (ram,0x01dcf02c) */
/* WARNING: Removing unreachable block (ram,0x01dcf038) */

void FUN_01dceb30(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  longlong **pplVar5;
  int unaff_ESI;
  longlong *unaff_RDI;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  int local_34;
  
  local_34 = unaff_ESI;
  if ((int)unaff_RDI[0x30] != unaff_ESI) {
    FUN_01e40eb0();
    if (local_60 == (longlong *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01e42030();
      bVar9 = local_90 != (longlong *)0x0;
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01e42030();
      (**(code **)(*local_60 + 0x620))();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (((char)unaff_RDI[0x4f] == '\0') || ((int)unaff_RDI[0x30] != local_34)) {
    bVar9 = (int)unaff_RDI[0x30] != local_34 || (char)unaff_RDI[0x4f] != '\0';
  }
  else {
    bVar9 = true;
    if (*(int *)(unaff_RDI[0x51] + 0xc) == *(int *)(unaff_RDI[0x2c] + 0xc)) {
      if (*(int *)(unaff_RDI[0x51] + 0xc) == 0) {
        bVar9 = false;
      }
      else {
        FUN_00d23310();
        pplVar5 = &local_90;
        if (local_58[0] != '\0') {
          pplVar5 = (longlong **)local_58;
        }
        local_90 = (longlong *)CONCAT71(local_90._1_7_,local_58[0]);
        *(char *)pplVar5 = '\0';
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar9 = *(int *)((longlong)local_60 + 0xc) != (int)unaff_RDI[0x30];
        if (((char)local_90 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(int *)(unaff_RDI + 0x30) = local_34;
  FUN_00d216c0();
  if (0 < *(int *)(unaff_RDI[0x2c] + 0xc)) {
    if (local_34 < 1) {
      iVar7 = 0;
      do {
        FUN_00d7a7b0();
        if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(unaff_RDI[0x2c] + 0xc));
    }
    else {
      iVar7 = 0;
      do {
        FUN_00d7a7b0();
        iVar6 = local_34;
        if (((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), iVar6 = local_34, local_58[0] != '\0' && (local_60 != (longlong *)0x0))
           )) {
          FUN_00d50b20();
          iVar6 = local_34;
        }
        do {
          lVar3 = DAT_028b8a78;
          if (DAT_028b8a78 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(unaff_RDI[0x2c] + 0xc));
    }
  }
  if ((bVar9) && ((char)unaff_RDI[0x4f] != '\0')) {
    if (unaff_RDI[0x51] != 0) {
      local_58[0] = '\0';
      local_60 = (longlong *)0x0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = unaff_RDI[0x51];
      iVar7 = 0;
      while( true ) {
        iVar6 = 0;
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar6 = -iVar7;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar7);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar6 = 0;
          }
          local_48 = CONCAT44(iVar6,(int)local_48);
        }
        lVar3 = (longlong)(int)local_48;
        iVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        if (*(int *)(local_50 + 0xc) <= iVar7) break;
        local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
        iVar7 = iVar6;
        if (local_60 != (longlong *)0x0) {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_80 = local_60;
          while( true ) {
            lVar3 = (longlong)(int)local_78;
            iVar7 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar7);
            if (*(int *)((longlong)local_80 + 0xc) <= iVar7) break;
            local_90 = *(longlong **)(local_80[2] + 8 + lVar3 * 8);
            if (local_90 != DAT_028b8a88) {
              (**(code **)(*local_90 + 0x978))();
              (**(code **)(*local_90 + 0x478))();
            }
            FUN_00d50130();
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar7 = -local_78._4_4_;
              }
              else {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar7 = 0;
              }
              local_78 = CONCAT44(iVar7,(int)local_78);
            }
          }
          FUN_01de69a0();
          iVar7 = local_48._4_4_;
        }
      }
      FUN_01de6930();
    }
    FUN_00d216c0();
    if (0 < *(int *)(unaff_RDI[0x2c] + 0xc)) {
      if (local_34 < 1) {
        iVar7 = 0;
        do {
          FUN_01dcf670();
          if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(unaff_RDI[0x2c] + 0xc));
      }
      else {
        iVar7 = 0;
        do {
          FUN_01dcf670();
          iVar6 = local_34;
          if (((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), iVar6 = local_34, local_58[0] != '\0' &&
              (local_60 != (longlong *)0x0)))) {
            FUN_00d50b20();
            iVar6 = local_34;
          }
          do {
            plVar1 = DAT_028b8a88;
            if (DAT_028b8a88 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(unaff_RDI[0x2c] + 0xc));
      }
    }
  }
  (**(code **)(*unaff_RDI + 0xa20))();
  if (local_34 <= (int)unaff_RDI[0x36]) {
    *(undefined4 *)(unaff_RDI + 0x36) = 0xffffffff;
  }
  (**(code **)(*unaff_RDI + 0x928))();
  lVar3 = unaff_RDI[0x34];
  if (lVar3 != 0) {
    iVar7 = *(int *)(lVar3 + 0x18);
    iVar6 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (3 < iVar7) {
      uVar2 = iVar6 >> 2;
      uVar8 = (ulonglong)uVar2;
      bVar9 = false;
      while( true ) {
        uVar2 = uVar2 - 1;
        pvVar4 = (void *)(ulonglong)uVar2;
        if (local_34 <= *(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)pvVar4 * 4)) {
          FUN_00e7b4e0();
          FUN_00c921e0();
          bVar9 = true;
        }
        if ((longlong)uVar8 < 2) break;
        uVar8 = uVar8 - 1;
        lVar3 = unaff_RDI[0x34];
      }
      if (bVar9) {
        lVar3 = unaff_RDI[0x34];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e340();
        _memcpy(pvVar4,(void *)(longlong)*(int *)(lVar3 + 0x18),param_3);
        FUN_00d50b20();
        (**(code **)(*unaff_RDI + 0x400))();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0x930))();
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


