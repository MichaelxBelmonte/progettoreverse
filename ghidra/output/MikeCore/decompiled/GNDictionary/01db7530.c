// Function: FUN_01db7530
// Address: 01db7530
// Size: 1148 bytes
// Class: GNDictionary


ulonglong FUN_01db7530(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  undefined7 uVar9;
  longlong lVar8;
  float fVar10;
  float fVar11;
  float in_XMM0_Dd;
  float fVar12;
  float fVar13;
  longlong local_d8;
  char local_d0;
  longlong local_98;
  char local_90;
  float local_88;
  float fStack_84;
  float fStack_7c;
  float local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_34;
  
  fVar11 = (float)((ulonglong)param_1 >> 0x20);
  fVar10 = (float)param_1;
  uVar9 = (undefined7)((ulonglong)unaff_RDI >> 8);
  local_88 = fVar11;
  if (((char)unaff_RDI[0x27] == '\0') && ((fVar11 != 0.0 || (NAN(fVar11))))) {
    fVar13 = fVar11;
    fStack_84 = fVar11;
    fStack_7c = in_XMM0_Dd;
    FUN_01db2340();
    if ((local_d0 == '\0') && (local_d8 != 0)) {
      FUN_00d50b00();
    }
    if (*(int *)(local_d8 + 0xc) < 1) {
      bVar4 = false;
      lVar7 = 0;
      local_34 = 0.0;
      local_58 = 0.0;
      local_68 = 0.0;
    }
    else {
      local_68 = 0.0;
      lVar8 = 0;
      local_58 = 0.0;
      local_34 = 0.0;
      lVar7 = 0;
      bVar4 = false;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_d8 + 0x10) + lVar8 * 8);
        if (lVar7 == lVar2) {
          if ((!bVar4) && (lVar7 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (lVar7 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            lVar7 = lVar2;
          }
          else {
            bVar4 = true;
            lVar7 = lVar2;
          }
        }
        fVar12 = fVar13;
        if (*(longlong **)(lVar7 + 0x20) != (longlong *)*unaff_RSI) {
          (**(code **)(**(longlong **)(lVar7 + 0x20) + 0x4d8))();
          fVar12 = 0.0;
          local_68 = local_68 + fVar13;
          local_58 = local_58 + *(float *)(lVar7 + 0x14);
          local_34 = local_34 + *(float *)(lVar7 + 0x1c);
        }
        lVar8 = lVar8 + 1;
        fVar13 = fVar12;
      } while (lVar8 < *(int *)(local_d8 + 0xc));
    }
    if ((DAT_0239424c < local_88) && (local_88 < local_68 - local_58)) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
      fStack_84 = fStack_84 + fVar11;
      fStack_7c = fStack_7c + in_XMM0_Dd;
      uVar1 = *(uint *)(unaff_RDI[0x28] + 0xc);
      if ((int)uVar1 < 1) {
        if ((float)MACH_HEADER.reserved <= fStack_84) goto LAB_01db77bb;
LAB_01db7985:
        FUN_00d50b20();
      }
      else {
        lVar8 = *(longlong *)(unaff_RDI[0x28] + 0x10);
        uVar6 = 0;
        do {
          local_58 = fStack_84;
          fStack_54 = fStack_84;
          fStack_50 = fStack_7c;
          fStack_4c = fStack_7c;
          if (*(longlong *)(*(longlong *)(lVar8 + uVar6 * 8) + 0x20) == *unaff_RSI) {
            lVar8 = *(longlong *)(lVar8 + uVar6 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
              local_6c = *(float *)(lVar8 + 0x1c);
              FUN_00d50b20();
              if (local_6c <= local_58) goto LAB_01db77bb;
              goto LAB_01db797e;
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        if ((float)MACH_HEADER.reserved <= fStack_84) goto LAB_01db77bb;
LAB_01db797e:
        if (local_d8 != 0) goto LAB_01db7985;
      }
      uVar6 = CONCAT71(uVar9,1);
      if ((bVar4) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01db79a3;
    }
LAB_01db77bb:
    if (local_88 < 0.0) {
      fVar13 = 0.0;
      fVar12 = 0.0;
      if (local_68 - local_88 < local_34) {
        (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
        fVar13 = fVar13 + fVar11;
        fVar12 = fVar12 + in_XMM0_Dd;
        uVar1 = *(uint *)(unaff_RDI[0x28] + 0xc);
        if (0 < (int)uVar1) {
          lVar8 = *(longlong *)(unaff_RDI[0x28] + 0x10);
          uVar6 = 0;
          do {
            local_68 = fVar13;
            fStack_64 = fVar13;
            fStack_60 = fVar12;
            fStack_5c = fVar12;
            if (*(longlong *)(*(longlong *)(lVar8 + uVar6 * 8) + 0x20) == *unaff_RSI) {
              lVar8 = *(longlong *)(lVar8 + uVar6 * 8);
              if (lVar8 != 0) {
                FUN_00d50b00();
                local_58 = *(float *)(lVar8 + 0x14);
                FUN_00d50b20();
                if (local_68 <= local_58) goto LAB_01db786d;
                goto LAB_01db797e;
              }
              break;
            }
            uVar6 = uVar6 + 1;
          } while (uVar1 != uVar6);
        }
        if ((float)MACH_HEADER.sizeofcmds < fVar13) goto LAB_01db797e;
      }
    }
LAB_01db786d:
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    if ((bVar4) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = (longlong *)unaff_RDI[6];
  if (plVar3 == (longlong *)0x0) {
LAB_01db7923:
    if ((((local_88 == 0.0) && (!NAN(local_88))) ||
        (uVar6 = (**(code **)(*unaff_RDI + 0x560))(), (uVar6 & 0x10) != 0)) &&
       (((fVar10 == 0.0 && (!NAN(fVar10))) ||
        (uVar6 = (**(code **)(*unaff_RDI + 0x560))(), (uVar6 & 2) != 0)))) {
      uVar6 = CONCAT71(uVar9,1);
      goto LAB_01db79a3;
    }
  }
  else {
    FUN_00d50b00();
    local_98 = *param_2;
    local_90 = '\0';
    cVar5 = (**(code **)(*plVar3 + 0x5a0))(fVar10,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') goto LAB_01db7923;
  }
  uVar6 = 0;
LAB_01db79a3:
  return uVar6 & 0xffffffff;
}


