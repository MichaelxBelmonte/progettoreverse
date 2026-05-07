// Function: FUN_01c21b20
// Address: 01c21b20
// Size: 1458 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01c22033) */
/* WARNING: Removing unreachable block (ram,0x01c22040) */
/* WARNING: Removing unreachable block (ram,0x01c21ec3) */
/* WARNING: Removing unreachable block (ram,0x01c21ed0) */
/* WARNING: Removing unreachable block (ram,0x01c21ef3) */
/* WARNING: Removing unreachable block (ram,0x01c21f00) */
/* WARNING: Removing unreachable block (ram,0x01c21f51) */
/* WARNING: Removing unreachable block (ram,0x01c21f5a) */
/* WARNING: Removing unreachable block (ram,0x01c21f97) */
/* WARNING: Removing unreachable block (ram,0x01c21fc0) */
/* WARNING: Removing unreachable block (ram,0x01c21f99) */
/* WARNING: Removing unreachable block (ram,0x01c21fc2) */

void FUN_01c21b20(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  uint uVar9;
  longlong **pplVar10;
  longlong *plVar11;
  int iVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  int local_98;
  uint local_90;
  uint local_8c;
  longlong *local_80;
  char local_78;
  longlong *local_60;
  char local_58;
  int local_48;
  
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    FUN_01c22370(param_1,param_2 & 0xff);
  }
  else {
    local_8c = param_2;
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *unaff_RSI;
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        uVar9 = 0;
        do {
          plVar11 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar9 * 8);
          local_90 = uVar9;
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_d0 = 1;
          lVar7 = *(longlong *)(unaff_RDI + 0x178);
          local_d8 = plVar11;
          if (lVar7 != 0) {
            FUN_00d50b00();
            local_b0 = 0;
            local_b8 = (longlong *)0x0;
            local_a0 = 0xffffffff;
            local_98 = 0;
            local_a0._4_4_ = 0;
            local_a8 = lVar7;
            while( true ) {
              plVar4 = local_60;
              if (local_a0._4_4_ != 0) {
                if (local_a0._4_4_ < 1) {
                  iVar12 = -local_a0._4_4_;
                }
                else {
                  iVar12 = (int)local_a0 - local_a0._4_4_;
                  local_a0 = CONCAT44(local_a0._4_4_,iVar12);
                  FUN_00d23690();
                  local_98 = local_98 + local_a0._4_4_;
                  iVar12 = 0;
                }
                local_a0 = CONCAT44(iVar12,(int)local_a0);
              }
              lVar7 = (longlong)(int)local_a0;
              iVar12 = (int)local_a0 + 1;
              local_a0 = CONCAT44(local_a0._4_4_,iVar12);
              if (*(int *)(local_a8 + 0xc) <= iVar12) break;
              local_b8 = *(longlong **)(*(longlong *)(local_a8 + 0x10) + 8 + lVar7 * 8);
              FUN_01c2d280();
              pplVar10 = (longlong **)&DAT_02802688;
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar10 = &local_d8;
                if (cVar5 == '\0') {
                  pplVar10 = (longlong **)&DAT_02802688;
                }
              }
              plVar2 = *pplVar10;
              cVar5 = *(char *)(pplVar10 + 1);
              if ((cVar5 == '\0') || (plVar2 == (longlong *)0x0)) {
                if (plVar2 != (longlong *)0x0) goto LAB_01c21d79;
                bVar3 = true;
              }
              else {
                FUN_00d50b00();
LAB_01c21d79:
                pvVar8 = _pthread_getspecific((pthread_key_t)pplVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01783cd0();
                if (plVar11 == local_60) {
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else if (local_58 == '\0') {
                  if (local_60 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_d8 = local_60;
                  if (plVar11 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  local_d0 = 1;
                  plVar11 = local_60;
                }
                else {
                  local_d8 = local_60;
                  if (plVar11 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  local_d0 = 1;
                  plVar11 = local_60;
                }
                bVar3 = false;
              }
              local_c0 = '\0';
              local_c8 = plVar11;
              (**(code **)(*local_b8 + 0x370))();
              if (local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_60 == (longlong *)0x0) {
LAB_01c22063:
                if (cVar5 != '\0' && !bVar3) {
                  FUN_00d50b20();
                }
              }
              else {
                if (!bVar3) {
                  FUN_01c07800();
                  if (local_58 == '\0') {
                    if (local_60 != (longlong *)0x0) {
                      FUN_00d50b00();
                      goto LAB_01c21f5f;
                    }
                  }
                  else if (local_60 != (longlong *)0x0) {
LAB_01c21f5f:
                    local_58 = '\0';
                    local_60 = (longlong *)0x0;
                    local_48 = -1;
                    while( true ) {
                      lVar7 = (longlong)local_48;
                      local_48 = local_48 + 1;
                      if (*(int *)((longlong)plVar4 + 0xc) <= local_48) break;
                      local_60 = *(longlong **)(plVar4[2] + 8 + lVar7 * 8);
                      FUN_01bb96f0();
                      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (local_80 == plVar2) {
                        local_78 = '\0';
                        FUN_00d235a0();
                        local_80 = local_60;
                      }
                    }
                    FUN_01c2d490();
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  goto LAB_01c22063;
                }
                local_58 = '\0';
                FUN_00d235a0();
                FUN_00d50b20();
              }
            }
            FUN_01c2d1e0();
            FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          uVar9 = local_90 + 1;
        } while ((int)uVar9 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
    FUN_01c22370();
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


