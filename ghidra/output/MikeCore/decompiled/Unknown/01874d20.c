// Function: FUN_01874d20
// Address: 01874d20
// Size: 1405 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0187508e) */
/* WARNING: Removing unreachable block (ram,0x01875097) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01874d20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  ulonglong local_88;
  ulonglong local_78;
  
  if (*unaff_RSI == 0) {
    lVar4 = *unaff_RDI;
    iVar8 = *(int *)(lVar4 + 0xc);
    if (iVar8 < 1) goto LAB_01875069;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar7 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_120 = 1;
      local_118 = *param_2;
      local_110 = 0;
      local_108 = *param_1;
      local_100 = 0;
      local_f8 = *param_3;
      local_f0 = 0;
      local_128 = lVar4;
      FUN_0187ba90(&local_f8,&local_108,param_4);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
      lVar4 = *unaff_RDI;
      local_78 = (ulonglong)*(int *)(lVar4 + 0xc);
    } while (lVar7 < (longlong)local_78);
  }
  else {
    local_148 = *param_1;
    local_140 = 0;
    local_138 = *param_3;
    local_130 = 0;
    FUN_0187ba90(&local_138,&local_148,param_4);
    lVar4 = *unaff_RDI;
    local_78 = (ulonglong)*(uint *)(lVar4 + 0xc);
  }
  iVar8 = (int)local_78;
  if (1 < iVar8) {
    local_78 = local_78 & 0xffffffff;
    uVar9 = (ulonglong)(iVar8 - 1);
    do {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar7 = *(longlong *)(lVar4 + (uVar9 & 0xffffffff) * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
        lVar4 = *(longlong *)(*unaff_RDI + 0x10);
      }
      local_88 = (ulonglong)((int)uVar9 - 1);
      lVar4 = *(longlong *)(lVar4 + local_88 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      lVar6 = *(longlong *)(lVar7 + 0x18);
      if (*(int *)(lVar6 + 0xc) == 0) {
        lVar5 = *(longlong *)(lVar4 + 0x18);
        if (*(int *)(lVar5 + 0xc) != 0) {
          bVar1 = false;
          goto LAB_01874e6c;
        }
LAB_01874e8a:
        lVar6 = **(longlong **)(lVar6 + 0x10);
        lVar5 = **(longlong **)(lVar5 + 0x10);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((*(int *)(lVar5 + 0xc) != *(int *)(lVar6 + 0xc)) ||
           (bVar1 = true, *(int *)(lVar5 + 0x10) != *(int *)(lVar6 + 0x10))) {
          bVar1 = false;
        }
        FUN_00d50b20();
        if (bVar1) {
          *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar7 + 0x10);
          FUN_00d23620();
          local_e0 = 0;
          local_d8 = *param_2;
          local_d0 = 0;
          local_c8 = *param_1;
          local_c0 = 0;
          local_b8 = *param_3;
          local_b0 = 0;
          local_e8 = lVar4;
          FUN_0187ba90(&local_b8,&local_c8,param_4);
        }
      }
      else {
        fVar10 = *(float *)(**(longlong **)(lVar6 + 0x10) + 0x14);
        bVar1 = DAT_0239425c < fVar10;
        lVar5 = *(longlong *)(lVar4 + 0x18);
        if (*(int *)(lVar5 + 0xc) == 0) {
          if (fVar10 <= DAT_0239425c) goto LAB_01874e8a;
        }
        else {
LAB_01874e6c:
          if (DAT_0239425c < *(float *)(**(longlong **)(lVar5 + 0x10) + 0x14) == bVar1)
          goto LAB_01874e8a;
        }
      }
      FUN_00d50b20();
      FUN_00d50b20();
      if ((longlong)local_78 < 3) goto LAB_01874f89;
      local_78 = local_78 - 1;
      lVar4 = *unaff_RDI;
      uVar9 = local_88;
    } while( true );
  }
  goto LAB_01875069;
LAB_01874f89:
  lVar4 = *unaff_RDI;
  iVar8 = *(int *)(lVar4 + 0xc);
LAB_01875069:
  if (*unaff_RSI == 0) {
    uVar3 = 0;
    if (0 < iVar8) goto LAB_018750cc;
  }
  else {
    iVar2 = FUN_00d237a0();
    uVar3 = 0;
    if (0 < iVar2) {
      uVar3 = iVar2 - 1;
    }
    lVar4 = *unaff_RDI;
    iVar8 = iVar2 + 1;
    if (iVar2 + 1 < *(int *)(lVar4 + 0xc)) {
      iVar8 = *(int *)(lVar4 + 0xc);
    }
    if ((int)uVar3 < iVar8) {
LAB_018750cc:
      uVar9 = (ulonglong)uVar3;
      lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar9 * 8);
      do {
        if (lVar7 != 0) {
          FUN_00d50b00();
          lVar4 = *unaff_RDI;
        }
        if (((longlong)uVar9 < (longlong)*(int *)(lVar4 + 0xc) + -1) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 8 + uVar9 * 8), lVar4 != 0)) {
          fVar10 = (float)FUN_00d50b00();
          *(undefined4 *)(lVar7 + 0x14) = 0x7f7fffff;
          if (*(int *)(*(longlong *)(lVar7 + 0x18) + 0xc) == 0) {
            lVar6 = *(longlong *)(lVar4 + 0x18);
            if (*(int *)(lVar6 + 0xc) != 0) {
              bVar1 = false;
              goto LAB_01875190;
            }
LAB_018751aa:
            lVar6 = *(longlong *)(lVar7 + 0x28);
            if (lVar6 != 0) {
              fVar10 = (float)FUN_00d50b00();
            }
            local_a0 = 1;
            lVar5 = *(longlong *)(lVar4 + 0x28);
            local_a8 = lVar6;
            if (lVar5 != 0) {
              fVar10 = (float)FUN_00d50b00();
            }
            local_90 = 1;
            local_98 = lVar5;
            uVar11 = FUN_0187bc30(fVar10,1);
            *(undefined4 *)(lVar7 + 0x14) = uVar11;
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            fVar10 = (float)((uint)(*(float *)(lVar7 + 0x30) - *(float *)(lVar4 + 0x30)) &
                            _DAT_02390140);
            *(float *)(lVar7 + 0x14) =
                 (float)((uint)SQRT((float)(_DAT_02390140 & -(uint)(DAT_02390d30 < fVar10) &
                                            (uint)(fVar10 + DAT_02421224) |
                                           ~-(uint)(DAT_02390d30 < fVar10) & (uint)fVar10) +
                                    DAT_02390124) & _DAT_02390140) * *(float *)(lVar7 + 0x14);
          }
          else {
            fVar10 = *(float *)(**(longlong **)(*(longlong *)(lVar7 + 0x18) + 0x10) + 0x14);
            bVar1 = DAT_0239425c < fVar10;
            lVar6 = *(longlong *)(lVar4 + 0x18);
            if (*(int *)(lVar6 + 0xc) == 0) {
              if (fVar10 <= DAT_0239425c) goto LAB_018751aa;
            }
            else {
LAB_01875190:
              fVar10 = *(float *)(**(longlong **)(lVar6 + 0x10) + 0x14);
              if (DAT_0239425c < fVar10 == bVar1) goto LAB_018751aa;
            }
          }
          FUN_00d50b20();
        }
        else {
          *(undefined4 *)(lVar7 + 0x14) = 0x7f7fffff;
        }
        FUN_00d50b20();
        if ((longlong)iVar8 - 1U == uVar9) {
          return;
        }
        lVar4 = *unaff_RDI;
        uVar9 = uVar9 + 1;
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar9 * 8);
      } while( true );
    }
  }
  return;
}


