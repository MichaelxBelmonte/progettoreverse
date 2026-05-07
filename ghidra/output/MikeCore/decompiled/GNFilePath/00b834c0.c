// Function: FUN_00b834c0
// Address: 00b834c0
// Size: 3428 bytes
// Class: GNFilePath
// String references:
//   ".%@"
//   "%@%@"
//   "%@R"
//   "%@L"
//   "%@.L"
//   "%@.R"


/* WARNING: Removing unreachable block (ram,0x00b8412f) */
/* WARNING: Removing unreachable block (ram,0x00b8413f) */
/* WARNING: Removing unreachable block (ram,0x00b83882) */
/* WARNING: Removing unreachable block (ram,0x00b8388e) */
/* WARNING: Removing unreachable block (ram,0x00b841d5) */
/* WARNING: Removing unreachable block (ram,0x00b841e1) */

undefined8 * FUN_00b834c0(char param_1,int *param_2)

{
  bool bVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong *local_d0;
  int *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  plVar11 = local_88;
  if ((char)local_80 == '\0') {
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b00();
      local_c8 = param_2;
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00b83531;
    }
LAB_00b83579:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    plVar8 = plVar11;
  }
  else {
    local_c8 = param_2;
    if (local_88 == (longlong *)0x0) goto LAB_00b83579;
LAB_00b83531:
    if (param_1 == '\0') {
      iVar6 = FUN_00d8c7a0();
      do {
        while( true ) {
          if (iVar6 < 2) goto LAB_00b83579;
          cVar4 = FUN_00d8ca70();
          if ((cVar4 == 'L') || (cVar4 == 'R')) break;
          iVar6 = iVar6 + -1;
          if (cVar4 == '/') goto LAB_00b83579;
        }
        if (iVar6 < 3) goto LAB_00b83579;
        cVar4 = FUN_00d8ca70();
        iVar6 = iVar6 + -2;
      } while (1 < (byte)(cVar4 - 0x2dU));
    }
    FUN_00d8a060();
    plVar8 = local_88;
    plVar10 = plVar11;
    if (plVar11 == local_88) {
joined_r0x00b835fc:
      plVar8 = plVar10;
      if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_80 == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar10 = plVar8;
        plVar11 = local_88;
        goto joined_r0x00b835fc;
      }
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))();
    local_c0 = local_88;
    if ((char)local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00b83697;
      }
LAB_00b836c5:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto LAB_00b8358d;
    }
    if (local_88 == (longlong *)0x0) goto LAB_00b836c5;
LAB_00b83697:
    FUN_00b7ace0();
    local_b8 = local_50;
    local_b0 = 0;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_b0 = '\x01';
    FUN_00df2130();
    plVar11 = local_88;
    if ((char)local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_80 = local_80 & 0xffffff00;
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_a8 = plVar11;
    if (*(int *)((longlong)plVar11 + 0xc) < 1) {
      plVar11 = (longlong *)0x0;
      local_90 = 0;
LAB_00b839bd:
      lVar9 = DAT_02764250;
      if (DAT_02764250 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d8f400();
      lVar2 = DAT_02764258;
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        if (DAT_02764258 != 0) {
          FUN_00d50b00();
        }
        cVar5 = FUN_00d8f400();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        local_58 = (longlong *)0x0;
        bVar1 = false;
      }
      else {
        FUN_00d8c7a0();
        FUN_00d97ce0();
        plVar10 = local_a0;
        local_80 = 1;
        local_88 = &DAT_024c5048;
        local_70 = 0;
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_78 = plVar10;
        local_70 = '\x01';
        FUN_00d8cb40();
        piVar3 = local_c8;
        local_58 = local_50;
        if (local_50 == (longlong *)0x0) {
          bVar1 = false;
          local_58 = (longlong *)0x0;
        }
        else if (local_48 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
          bVar1 = true;
        }
        local_88 = &DAT_024c5048;
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (piVar3 != (int *)0x0) {
          *piVar3 = 0;
        }
      }
      lVar9 = DAT_02764260;
      if (DAT_02764260 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d8f400();
      lVar2 = DAT_02764268;
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        if (DAT_02764268 != 0) {
          FUN_00d50b00();
        }
        cVar5 = FUN_00d8f400();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        local_40 = plVar8;
        FUN_00d8c7a0();
        FUN_00d97ce0();
        plVar8 = local_a0;
        local_80 = 1;
        local_88 = &DAT_024c5048;
        local_70 = 0;
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_78 = plVar8;
        local_70 = '\x01';
        FUN_00d8cb40();
        plVar8 = local_50;
        if (local_50 == local_58) {
          if ((!bVar1) && (local_50 != (longlong *)0x0)) {
            plVar8 = local_58;
            if (local_48 != '\0') goto LAB_00b83cc6;
            bVar1 = true;
            FUN_00d50b00();
          }
LAB_00b83d10:
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_58 != (longlong *)0x0)) {
              local_58 = plVar8;
              FUN_00d50b20();
              bVar1 = true;
            }
            else {
              local_58 = plVar8;
              bVar1 = true;
            }
            goto LAB_00b83d10;
          }
          if ((bVar1) && (local_58 != (longlong *)0x0)) {
            local_58 = local_50;
            FUN_00d50b20();
          }
LAB_00b83cc6:
          local_48 = '\0';
          bVar1 = true;
          local_58 = plVar8;
        }
        local_88 = &DAT_024c5048;
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar8 = local_40;
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_c8 != (int *)0x0) {
          *local_c8 = 1;
        }
      }
      if (param_1 == '\0') {
        if (local_58 == (longlong *)0x0) goto LAB_00b83e8a;
        if (plVar11 != (longlong *)0x0) {
          local_a0 = local_58;
          local_d0 = plVar11;
          FUN_00083ea0(2,&local_d0);
          FUN_00d8cb40();
          plVar10 = local_50;
          if (local_50 == local_58) {
            if ((!bVar1) && (local_50 != (longlong *)0x0)) {
              if (local_48 != '\0') goto LAB_00b84098;
              bVar1 = true;
              FUN_00d50b00();
            }
LAB_00b8414d:
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (bVar1) {
                local_58 = plVar10;
                FUN_00d50b20();
                bVar1 = true;
              }
              else {
                local_58 = plVar10;
                bVar1 = true;
              }
              goto LAB_00b8414d;
            }
            if (bVar1) {
              local_58 = local_50;
              FUN_00d50b20();
            }
            else {
              local_58 = local_50;
            }
LAB_00b84098:
            local_48 = '\0';
            bVar1 = true;
          }
          local_88 = (longlong *)&DAT_0253d630;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          local_88 = &DAT_024c5048;
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*local_c0 + 0x400))();
      }
      else {
        plVar10 = plVar8;
        if (*local_c8 == 1) {
          local_80 = 1;
          local_88 = &DAT_024c5048;
          local_70 = 0;
          FUN_00d50b00();
          local_70 = '\x01';
          local_78 = plVar8;
          FUN_00d8cb40();
          if (local_50 == plVar8) {
LAB_00b83fd3:
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar10 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              goto LAB_00b83fd3;
            }
            FUN_00d50b20();
            local_48 = '\0';
          }
          local_88 = &DAT_024c5048;
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (*local_c8 == 0) {
          local_80 = 1;
          local_88 = &DAT_024c5048;
          local_70 = 0;
          FUN_00d50b00();
          local_70 = '\x01';
          local_78 = plVar8;
          FUN_00d8cb40();
          if (local_50 == plVar8) {
LAB_00b83f8a:
            if ((local_48 != '\0') && (plVar8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar10 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              plVar8 = local_50;
              goto LAB_00b83f8a;
            }
            FUN_00d50b20();
            local_48 = '\0';
          }
          local_88 = &DAT_024c5048;
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar11 != (longlong *)0x0) {
          local_d0 = plVar11;
          local_a0 = plVar10;
          FUN_00083ea0(2,&local_d0);
          FUN_00d8cb40();
          plVar8 = local_50;
          if (local_50 == plVar10) {
LAB_00b840a7:
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar12 = plVar10 != (longlong *)0x0;
              plVar10 = plVar8;
              if (bVar12) {
                FUN_00d50b20();
              }
              goto LAB_00b840a7;
            }
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_48 = '\0';
            plVar10 = local_50;
          }
          local_88 = (longlong *)&DAT_0253d630;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          local_88 = &DAT_024c5048;
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*local_c0 + 0x400))();
        plVar8 = plVar10;
      }
      if ((bVar1) && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar9 = 0;
      local_40 = plVar8;
      do {
        plVar8 = *(longlong **)(local_a8[2] + lVar9 * 8);
        if (plVar8 == (longlong *)0x0) {
          local_80 = 1;
          local_88 = &DAT_024c5048;
        }
        else {
          FUN_00d50b00();
          local_80 = 1;
          local_88 = &DAT_024c5048;
          local_70 = 0;
          FUN_00d50b00();
        }
        local_70 = '\x01';
        local_78 = plVar8;
        FUN_00d8cb40();
        plVar11 = local_50;
        if (local_50 == plVar8) {
LAB_00b83831:
          plVar11 = plVar8;
          if (local_48 != '\0') {
LAB_00b83837:
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (plVar8 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar8 = plVar11;
              goto LAB_00b83831;
            }
            if (local_48 == '\0') goto LAB_00b83845;
            goto LAB_00b83837;
          }
          if (plVar8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_48 = '\0';
        }
LAB_00b83845:
        local_88 = &DAT_024c5048;
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        cVar4 = FUN_00d8f400();
        plVar8 = local_40;
        if (cVar4 != '\0') {
          FUN_00d8c7a0();
          FUN_00d8c7a0();
          FUN_00d97ce0();
          if (local_88 == plVar8) {
LAB_00b83983:
            if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar8 = local_88;
            if ((char)local_80 == '\0') {
              if (local_88 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              goto LAB_00b83983;
            }
            FUN_00d50b20();
          }
          if (plVar11 == (longlong *)0x0) {
            local_90 = 0;
            plVar11 = (longlong *)0x0;
          }
          else {
            uVar7 = FUN_00d50b00();
            local_90 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            FUN_00d50b20();
          }
          goto joined_r0x00b83b13;
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((longlong)local_a8 + 0xc));
      local_90 = 0;
      plVar11 = (longlong *)0x0;
      plVar8 = local_40;
joined_r0x00b83b13:
      if (plVar8 != (longlong *)0x0) goto LAB_00b839bd;
      plVar8 = (longlong *)0x0;
LAB_00b83e8a:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    FUN_00d50b20();
    if (((char)local_90 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_00b8358d:
  FUN_00d50b20();
  return unaff_RDI;
}


