// Function: FUN_01c22370
// Address: 01c22370
// Size: 2198 bytes
// Class: MULSSComponentRenderer


/* WARNING: Removing unreachable block (ram,0x01c22ba9) */
/* WARNING: Removing unreachable block (ram,0x01c22bb5) */
/* WARNING: Removing unreachable block (ram,0x01c22853) */
/* WARNING: Removing unreachable block (ram,0x01c22863) */
/* WARNING: Removing unreachable block (ram,0x01c22401) */
/* WARNING: Removing unreachable block (ram,0x01c2240d) */
/* WARNING: Removing unreachable block (ram,0x01c2265e) */
/* WARNING: Removing unreachable block (ram,0x01c2266e) */
/* WARNING: Removing unreachable block (ram,0x01c22bc3) */
/* WARNING: Removing unreachable block (ram,0x01c22bcf) */

void FUN_01c22370(undefined8 param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 **ppuVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  char local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 *local_48;
  char local_40 [8];
  
  FUN_01c219e0();
  puVar6 = local_70;
  if (local_70 == (undefined8 *)*unaff_RSI) {
    cVar5 = '\x01';
  }
  else {
    FUN_01c219e0();
    if (local_48 == (undefined8 *)0x0) {
      cVar5 = '\0';
    }
    else {
      if (*unaff_RSI == 0) {
        cVar5 = '\0';
      }
      else {
        FUN_01c219e0();
        cVar5 = (**(code **)(*(longlong *)CONCAT71(uStack_87,local_88) + 0x50))();
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if ((local_68[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    pcVar4 = DAT_02572370;
    local_78 = puVar6;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(unaff_RDI + 0x1d0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((param_2 != '\0') && (*(longlong *)(unaff_RDI + 0x1d0) != 0)) {
      *(undefined8 *)(unaff_RDI + 0x1d0) = 0;
      FUN_00d50b20();
    }
    puVar6 = (undefined8 *)*unaff_RSI;
    if (*(longlong *)(unaff_RDI + 0x168) == 0) {
      if (puVar6 != (undefined8 *)0x0) {
        local_68[0] = '\0';
        local_70 = (undefined8 *)0x0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        local_60 = puVar6;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar10 = -local_58._4_4_;
            }
            else {
              iVar10 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar10 = 0;
            }
            local_58 = CONCAT44(iVar10,(int)local_58);
          }
          lVar7 = (longlong)(int)local_58;
          iVar10 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
          local_70 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
          FUN_01c231c0();
          puVar6 = (undefined8 *)CONCAT71(uStack_87,local_88);
          if (local_80 == '\0') {
            if (puVar6 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_40[0] = '\0';
          local_48 = puVar6;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_0038d420();
      }
    }
    else if (puVar6 != (undefined8 *)0x0) {
      local_68[0] = '\0';
      local_70 = (undefined8 *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = puVar6;
      while( true ) {
        lVar7 = (longlong)(int)local_58;
        iVar10 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar10);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
        puVar6 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
        local_70 = puVar6;
        if (local_68[0] == '\0') {
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar4)();
        do {
          local_40[0] = '\0';
          local_48 = puVar6;
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(longlong **)(unaff_RDI + 0x168) + 0x370))();
          puVar12 = local_48;
          if (local_48 == puVar6) {
LAB_01c2263d:
            puVar12 = puVar6;
            if (local_40[0] != '\0') {
LAB_01c22643:
              if (local_48 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_40[0] == '\0') {
              if (local_48 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              if (puVar6 != (undefined8 *)0x0) {
                FUN_00d50b20();
                puVar6 = puVar12;
                goto LAB_01c2263d;
              }
              if (local_40[0] == '\0') goto LAB_01c22651;
              goto LAB_01c22643;
            }
            if (puVar6 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
          }
LAB_01c22651:
          puVar6 = puVar12;
        } while (puVar12 != (undefined8 *)0x0);
        if (*(int *)((longlong)puVar8 + 0xc) != 0) {
          local_40[0] = '\0';
          local_48 = puVar8;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar10 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar10 = 0;
          }
          local_58 = CONCAT44(iVar10,(int)local_58);
        }
      }
      FUN_0038d420();
    }
    if (*(int *)(unaff_RDI + 0x160) == 1) {
      if ((*(longlong *)(unaff_RDI + 0x188) != 0) && (*(int *)((longlong)local_78 + 0xc) != 0)) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar4)();
        local_68[0] = '\0';
        local_70 = (undefined8 *)0x0;
        local_60 = local_78;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        bVar2 = false;
        puVar6 = (undefined8 *)0x0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar10 = -local_58._4_4_;
            }
            else {
              iVar10 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar10 = 0;
            }
            local_58 = CONCAT44(iVar10,(int)local_58);
          }
          lVar7 = (longlong)(int)local_58;
          iVar10 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
          local_70 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
          FUN_00d23340();
          puVar12 = local_48;
          local_88 = local_40[0];
          pcVar9 = local_40;
          if (local_40[0] == '\0') {
            pcVar9 = &local_88;
          }
          *pcVar9 = '\0';
          if ((local_40[0] != '\0') && (puVar12 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 == '\0') && (puVar12 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          puVar12 = local_70;
          puVar13 = puVar6;
          if (local_50 + (int)local_58 == 0) {
            if (local_70 == puVar6) {
              bVar3 = bVar2;
              if ((!bVar2) && (local_70 != (undefined8 *)0x0)) {
                puVar12 = puVar6;
                if (local_68[0] != '\0') goto LAB_01c22af6;
                FUN_00d50b00();
                bVar3 = true;
              }
            }
            else if (local_68[0] == '\0') {
              if (local_70 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              puVar13 = puVar12;
              if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
LAB_01c22af6:
              local_68[0] = '\0';
              puVar13 = puVar12;
              bVar3 = true;
            }
            FUN_00d23740();
            bVar2 = bVar3;
          }
          puVar6 = puVar13;
        }
        FUN_01c2d530();
        FUN_01ce8890();
        if (puVar8 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((*(int *)(unaff_RDI + 0x160) == 0) && (*(longlong *)(unaff_RDI + 0x180) != 0)) {
      if (*(int *)((longlong)local_78 + 0xc) == 0) {
        FUN_01dd4c60();
      }
      else {
        FUN_00d23310();
        puVar6 = local_70;
        ppuVar11 = &local_48;
        if (local_68[0] != '\0') {
          ppuVar11 = (undefined8 **)local_68;
        }
        local_48 = (undefined8 *)CONCAT71(local_48._1_7_,local_68[0]);
        *(char *)ppuVar11 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01eda650();
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((param_2 != '\0') && (lVar7 = *(longlong *)(unaff_RDI + 0x1d0), lVar7 != lVar1)) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x1d0) = lVar1;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


