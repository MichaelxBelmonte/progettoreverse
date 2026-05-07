// Function: FUN_01b55820
// Address: 01b55820
// Size: 2607 bytes
// Class: MUScaleDetectionOptionsData


/* WARNING: Removing unreachable block (ram,0x01b55b30) */
/* WARNING: Removing unreachable block (ram,0x01b55b39) */

void FUN_01b55820(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong **pplVar10;
  undefined7 uVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar12;
  longlong *plVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float extraout_XMM0_Db;
  ulonglong local_160;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  undefined4 local_10c;
  longlong local_108;
  char local_100;
  ulonglong local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  int local_8c;
  ulonglong local_68;
  longlong *local_60;
  char local_58;
  longlong *local_48;
  longlong *local_38;
  longlong *plVar13;
  
  if (((*unaff_RSI != 0) && (iVar6 = FUN_01d3a5a0(), iVar6 == 1)) &&
     (iVar6 = FUN_01d3b630(unaff_RDI), iVar6 == 1)) {
    cVar5 = (**(code **)(*unaff_RDI + 0x9a0))();
    if (cVar5 == '\0') {
      return;
    }
    if ((char)unaff_RDI[0x49] != '\0') {
      FUN_01d11e80();
      return;
    }
    if (((unaff_RDI[0x48] != 0) && (cVar5 = FUN_01e05890(), cVar5 != '\0')) &&
       ((cVar5 = FUN_01e06f90(unaff_RDI), cVar5 != '\0' &&
        (iVar6 = FUN_01d3b620(unaff_RDI), iVar6 == 1)))) {
      FUN_01e07010(unaff_RDI);
      FUN_01d3abf0();
      uVar16 = FUN_01e466c0();
      (**(code **)(*unaff_RDI + 0x960))();
      lVar3 = local_108;
      local_a0 = 0;
      if (local_100 == '\0') {
        if (local_108 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_100 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = lVar3;
      FUN_00d8dab0();
      if (local_60 == (longlong *)0x0) {
        local_10c = (undefined4)CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        local_98 = 0;
      }
      else if (local_58 == '\0') {
        uVar7 = FUN_00d50b00();
        local_10c = 0;
        local_98 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
      else {
        local_98 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        local_58 = '\0';
        local_10c = 0;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      local_8c = (int)(float)uVar16;
      bVar1 = false;
      local_48 = (longlong *)0x0;
      local_68 = 0;
      bVar9 = false;
      local_160 = 0;
      local_f8 = 0;
      local_b0 = 0;
      plVar12 = (longlong *)0x0;
      bVar4 = bVar1;
      plVar14 = (longlong *)0x0;
LAB_01b55bd7:
      do {
        plVar13 = plVar14;
        bVar2 = bVar4;
        (**(code **)(*unaff_RDI + 0x658))();
        plVar14 = (longlong *)*unaff_RSI;
        if (plVar14 == local_60) {
          if (((char)unaff_RSI[1] == '\0') && (local_60 != (longlong *)0x0)) {
            if (local_58 == '\0') {
              FUN_00d50b00();
              goto LAB_01b55c60;
            }
            goto LAB_01b55c2a;
          }
        }
        else {
          lVar3 = unaff_RSI[1];
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)local_60;
            if (((char)lVar3 != '\0') && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01b55c60:
            *(undefined1 *)(unaff_RSI + 1) = 1;
          }
          else {
            *unaff_RSI = (longlong)local_60;
            if (((char)lVar3 != '\0') && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01b55c2a:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_58 = '\0';
          }
        }
        if (*unaff_RSI == 0) {
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b56147:
          FUN_01e07010();
          if ((char)local_b0 != '\0') {
            (**(code **)(*unaff_RDI + 0xa50))();
          }
          if ((local_f8 & 1) != 0) {
            plVar14 = (longlong *)unaff_RDI[0x48];
            local_b8 = 0;
            uVar15 = FUN_00d50b00();
            local_b8 = '\x01';
            local_c0 = unaff_RDI;
            (**(code **)(*plVar14 + 0x28))(uVar15,local_8c);
            if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (((char)local_68 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar2) && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar1) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_10c != '\0' || local_60 == (longlong *)0x0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        iVar6 = FUN_01d3a5a0();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 6) goto LAB_01b56147;
        if ((local_f8 & 1) == 0) {
          plVar14 = (longlong *)unaff_RDI[0x48];
          local_e8 = 0;
          uVar15 = FUN_00d50b00();
          local_e8 = '\x01';
          local_f0 = unaff_RDI;
          (**(code **)(*plVar14 + 0x20))(uVar15,local_8c);
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar14 = (longlong *)unaff_RDI[0x48];
          local_d8 = 0;
          uVar15 = FUN_00d50b00();
          local_d8 = '\x01';
          local_e0 = unaff_RDI;
          uVar7 = (**(code **)(*plVar14 + 0x30))(uVar15,&local_e0);
          uVar11 = (undefined7)((ulonglong)plVar14 >> 8);
          if (local_60 == local_48) {
            if (((char)local_68 == '\0') && (local_60 != (longlong *)0x0)) {
              plVar14 = local_48;
              if (local_58 != '\0') goto LAB_01b55d69;
              uVar8 = CONCAT71(uVar11,1);
              FUN_00d50b00();
            }
            else {
              uVar8 = local_68 & 0xffffffff;
            }
LAB_01b55dbb:
            if ((local_58 == '\0') || (local_60 == (longlong *)0x0)) {
              local_68 = uVar8 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_68 = uVar8 & 0xffffffff;
            }
          }
          else {
            if (local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              uVar8 = CONCAT71(uVar11,1);
              if (((char)local_68 == '\0') || (local_48 == (longlong *)0x0)) {
                local_48 = local_60;
              }
              else {
                FUN_00d50b20();
                local_48 = local_60;
              }
              goto LAB_01b55dbb;
            }
            plVar14 = local_60;
            if (((char)local_68 != '\0') && (local_48 != (longlong *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
LAB_01b55d69:
            local_58 = '\0';
            local_68 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            local_48 = plVar14;
          }
          uVar8 = local_68;
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
          local_f8 = CONCAT71((int7)(uVar8 >> 8),1);
        }
        FUN_01d3abf0();
        FUN_01e466c0();
        plVar14 = (longlong *)unaff_RDI[0x48];
        local_c8 = 0;
        FUN_00d50b00();
        local_c8 = '\x01';
        local_150 = local_60;
        local_148 = '\0';
        pplVar10 = &local_d0;
        local_d0 = unaff_RDI;
        (**(code **)(*plVar14 + 0x18))
                  (&local_150,pplVar10,local_8c,
                   (int)((float)((ulonglong)uVar16 >> 0x20) - extraout_XMM0_Db));
        if (local_60 == plVar12) {
          local_38 = plVar12;
          if ((!bVar1) && (local_60 != (longlong *)0x0)) {
            if (local_58 != '\0') goto LAB_01b55ec1;
            bVar1 = true;
            FUN_00d50b00();
          }
LAB_01b55f0f:
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = local_60;
              bVar1 = true;
            }
            else {
              local_38 = local_60;
              bVar1 = true;
            }
            goto LAB_01b55f0f;
          }
          local_38 = local_60;
          if ((bVar1) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b55ec1:
          local_58 = '\0';
          bVar1 = true;
        }
        if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar12 = local_38;
        bVar4 = bVar2;
        plVar14 = plVar13;
      } while (local_38 == (longlong *)0x0);
      if (plVar13 != (longlong *)0x0) {
        local_138 = '\0';
        local_140 = plVar13;
        cVar5 = (**(code **)(*local_38 + 0x50))();
        if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') goto LAB_01b55bd7;
      }
      FUN_01e07010();
      local_128 = '\0';
      local_130 = local_38;
      (**(code **)(*unaff_RDI + 0x958))();
      if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e07010();
      if ((local_48 != (longlong *)0x0) && ((local_160 & 1) != 0)) {
        (**(code **)(*local_48 + 0x3b8))();
      }
      uVar8 = (**(code **)(*unaff_RDI + 0xa38))();
      if ((char)uVar8 != '\0') {
        if (bVar9) {
          uVar8 = (**(code **)(*unaff_RDI + 0xa50))();
        }
        else {
          bVar9 = true;
          uVar8 = (**(code **)(*unaff_RDI + 0xa50))();
        }
      }
      if (local_48 != (longlong *)0x0) {
        uVar8 = (**(code **)(*local_48 + 0x3c0))();
        local_160 = uVar8;
      }
      if (plVar13 == local_38) {
        local_b0 = CONCAT71((int7)((ulonglong)pplVar10 >> 8),1);
        if (bVar1) {
          if (!bVar2) {
            uVar7 = FUN_00d50b00();
            local_b0 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            bVar4 = true;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        if (bVar1) {
          uVar8 = FUN_00d50b00();
        }
        local_b0 = CONCAT71((int7)(uVar8 >> 8),1);
        bVar4 = bVar1;
        plVar14 = local_38;
        if ((bVar2) && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01b55bd7;
    }
  }
  local_120 = *unaff_RSI;
  local_118 = '\0';
  FUN_01e0b690();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  return;
}


