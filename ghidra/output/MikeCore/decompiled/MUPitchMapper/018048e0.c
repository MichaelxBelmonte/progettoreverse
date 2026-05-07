// Function: FUN_018048e0
// Address: 018048e0
// Size: 1546 bytes
// Class: MUPitchMapper


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_018048e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_38;
  float local_34;
  
  if (DAT_028af7a8 == 0) {
    FUN_01802d60();
    if (DAT_028af7a8 == 0) goto LAB_0180496b;
LAB_0180490d:
    lVar10 = DAT_028af7a8;
    FUN_00d50b00();
    if (*(int *)(lVar10 + 0xc) < 1) {
      local_34 = 0.0;
      local_38 = 0.0;
    }
    else {
      local_38 = 0.0;
      lVar7 = 0;
      local_34 = 0.0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar7 * 8);
        switch(*(undefined4 *)(lVar9 + 0xc)) {
        case 0:
          if (*(char *)(lVar9 + 0x10) != '\0') {
            cVar6 = *(char *)(*unaff_RSI + 0x48);
            if (*(char *)(*unaff_RDI + 0x48) == '\0') goto LAB_01804a00;
LAB_01804a2b:
            if (cVar6 != '\0') break;
LAB_01804ed5:
            uVar8 = 1;
LAB_01804eda:
            FUN_0180d070();
            goto joined_r0x01804ee6;
          }
          fVar12 = DAT_02390124;
          if (*(char *)(*unaff_RDI + 0x48) == '\0') {
            fVar12 = 0.0;
          }
          fVar13 = *(float *)(lVar9 + 0x14);
          fVar12 = fVar12 * fVar13;
          cVar6 = *(char *)(*unaff_RSI + 0x48);
joined_r0x01804e3e:
          fVar11 = DAT_02390124;
          if (cVar6 == '\0') {
            fVar11 = 0.0;
          }
          local_34 = local_34 + fVar12;
          fVar13 = fVar13 * fVar11;
LAB_018049a9:
          local_38 = local_38 + fVar13;
          break;
        case 1:
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar12 = DAT_02390124;
            if (*(char *)(*unaff_RDI + 0x49) == '\0') {
              fVar12 = 0.0;
            }
            fVar13 = *(float *)(lVar9 + 0x14);
            fVar12 = fVar12 * fVar13;
            cVar6 = *(char *)(*unaff_RSI + 0x49);
            goto joined_r0x01804e3e;
          }
          cVar6 = *(char *)(*unaff_RSI + 0x49);
          if (*(char *)(*unaff_RDI + 0x49) != '\0') goto LAB_01804a2b;
LAB_01804a00:
          if (cVar6 != '\0') {
LAB_01804ece:
            uVar8 = 0xffffffff;
            goto LAB_01804eda;
          }
          break;
        case 2:
          if (*(char *)(param_2 + 0x79) != '\0') {
            if (*(char *)(lVar9 + 0x10) == '\0') {
              fVar12 = DAT_02390124;
              if (*(char *)(*unaff_RDI + 0x4a) == '\0') {
                fVar12 = 0.0;
              }
              fVar13 = *(float *)(lVar9 + 0x14);
              fVar12 = fVar12 * fVar13;
              cVar6 = *(char *)(*unaff_RSI + 0x4a);
              goto joined_r0x01804e3e;
            }
            cVar6 = *(char *)(*unaff_RSI + 0x4a);
            if (*(char *)(*unaff_RDI + 0x4a) == '\0') goto joined_r0x01804be9;
LAB_01804aa5:
            if (cVar6 == '\0') goto LAB_01804ece;
          }
          break;
        case 3:
          if (*(char *)(param_2 + 0x78) != '\0') {
            cVar1 = *(char *)(*unaff_RDI + 0x4c);
            if (*(char *)(lVar9 + 0x10) == '\0') {
              fVar12 = DAT_02390124;
              if (cVar1 == '\0') {
                fVar12 = 0.0;
              }
              fVar13 = *(float *)(lVar9 + 0x14);
              fVar12 = fVar12 * fVar13;
              cVar6 = *(char *)(*unaff_RSI + 0x4c);
              goto joined_r0x01804e3e;
            }
            cVar6 = *(char *)(*unaff_RSI + 0x4c);
joined_r0x01804ae0:
            if (cVar1 != '\0') goto LAB_01804aa5;
joined_r0x01804be9:
            if (cVar6 != '\0') goto LAB_01804ed5;
          }
          break;
        case 4:
          if (*(char *)(param_2 + 0x7a) != '\0') {
            cVar1 = *(char *)(*unaff_RDI + 0x4d);
            if (*(char *)(lVar9 + 0x10) != '\0') {
              cVar6 = *(char *)(*unaff_RSI + 0x4d);
              goto joined_r0x01804ae0;
            }
            fVar12 = DAT_02390124;
            if (cVar1 == '\0') {
              fVar12 = 0.0;
            }
            fVar13 = *(float *)(lVar9 + 0x14);
            fVar12 = fVar12 * fVar13;
            cVar6 = *(char *)(*unaff_RSI + 0x4d);
            goto joined_r0x01804e3e;
          }
          break;
        case 5:
          if (*(char *)(param_2 + 0x7b) == '\0') {
            fVar13 = *(float *)(*unaff_RDI + 0x18);
            if (*(char *)(lVar9 + 0x10) != '\0') {
              fVar12 = *(float *)(*unaff_RSI + 0x18);
              if (fVar13 <= fVar12) goto LAB_01804c5a;
              goto LAB_01804ece;
            }
            local_34 = local_34 + fVar13 * *(float *)(lVar9 + 0x14);
            fVar13 = *(float *)(lVar9 + 0x14) * *(float *)(*unaff_RSI + 0x18);
            goto LAB_018049a9;
          }
          break;
        case 6:
          iVar2 = *(int *)(*unaff_RDI + 0x1c);
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar11 = (float)iVar2;
            fVar12 = *(float *)(lVar9 + 0x14);
            fVar13 = (float)*(int *)(*unaff_RSI + 0x1c);
LAB_0180498a:
            local_34 = local_34 + fVar11 * fVar12;
            fVar13 = fVar13 * fVar12;
            goto LAB_018049a9;
          }
          if (iVar2 < *(int *)(*unaff_RSI + 0x1c)) goto LAB_01804ece;
          if (*(int *)(*unaff_RSI + 0x1c) < iVar2) goto LAB_01804ed5;
          break;
        case 7:
          iVar2 = *(int *)(*unaff_RDI + 0x44);
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar11 = (float)iVar2;
            fVar12 = *(float *)(lVar9 + 0x14);
            fVar13 = (float)*(int *)(*unaff_RSI + 0x44);
            goto LAB_0180498a;
          }
          if (*(int *)(*unaff_RSI + 0x44) < iVar2) goto LAB_01804ece;
          if (iVar2 < *(int *)(*unaff_RSI + 0x44)) goto LAB_01804ed5;
          break;
        case 9:
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar12 = (float)FUN_00e7c810();
            fVar13 = *(float *)(lVar9 + 0x14);
            fVar11 = (float)FUN_00e7c810();
            local_34 = local_34 + fVar12 * fVar13;
            local_38 = local_38 + fVar11 * *(float *)(lVar9 + 0x14);
          }
          else if (*(int *)(*unaff_RDI + 0x38) != 0) {
            lVar9 = *unaff_RSI;
            if (*(int *)(lVar9 + 0x38) != 0) {
              cVar6 = FUN_00e7c020();
              if (cVar6 != '\0') goto LAB_01804ece;
              if (*(int *)(*unaff_RDI + 0x38) == 0) break;
              lVar9 = *unaff_RSI;
            }
            if (*(int *)(lVar9 + 0x38) != 0) {
              cVar6 = FUN_00e7c020();
              goto joined_r0x01804be9;
            }
          }
          break;
        case 10:
          uVar3 = *(uint *)(*unaff_RDI + 0x3c);
          uVar4 = -uVar3;
          if (0 < (int)uVar3) {
            uVar4 = uVar3;
          }
          uVar3 = *(uint *)(*unaff_RSI + 0x3c);
          uVar5 = -uVar3;
          if (0 < (int)uVar3) {
            uVar5 = uVar3;
          }
          if (*(char *)(lVar9 + 0x10) == '\0') {
            fVar11 = (float)(int)uVar4;
            fVar12 = *(float *)(lVar9 + 0x14);
            fVar13 = (float)(int)uVar5;
            goto LAB_0180498a;
          }
          if (uVar4 < uVar5) goto LAB_01804ece;
          if (uVar5 < uVar4) goto LAB_01804ed5;
          break;
        case 0xd:
          fVar13 = *(float *)(*unaff_RDI + 0x40);
          if (*(char *)(lVar9 + 0x10) == '\0') {
            local_34 = local_34 + fVar13 * *(float *)(lVar9 + 0x14);
            fVar13 = *(float *)(lVar9 + 0x14) * *(float *)(*unaff_RSI + 0x40);
            goto LAB_018049a9;
          }
          fVar12 = *(float *)(*unaff_RSI + 0x40);
          if (fVar12 < fVar13) goto LAB_01804ece;
LAB_01804c5a:
          if (fVar13 < fVar12) goto LAB_01804ed5;
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar10 + 0xc));
    }
    FUN_0180d070();
    uVar8 = 0xffffffff;
    if (local_38 < local_34) goto joined_r0x01804ee6;
  }
  else {
    if (DAT_028af7a8 != 0) goto LAB_0180490d;
LAB_0180496b:
    local_38 = 0.0;
    local_34 = 0.0;
    lVar10 = DAT_028af7a8;
  }
  uVar8 = (ulonglong)(local_34 < local_38);
joined_r0x01804ee6:
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  return uVar8;
}


