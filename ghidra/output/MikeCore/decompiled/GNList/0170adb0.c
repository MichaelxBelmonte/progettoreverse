// Function: FUN_0170adb0
// Address: 0170adb0
// Size: 1424 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x0170b28b) */
/* WARNING: Removing unreachable block (ram,0x0170b298) */
/* WARNING: Removing unreachable block (ram,0x0170aef6) */
/* WARNING: Removing unreachable block (ram,0x0170aeff) */
/* WARNING: Removing unreachable block (ram,0x0170adf0) */
/* WARNING: Removing unreachable block (ram,0x0170adf9) */
/* WARNING: Removing unreachable block (ram,0x0170b331) */
/* WARNING: Removing unreachable block (ram,0x0170b33e) */
/* WARNING: Removing unreachable block (ram,0x0170b06b) */
/* WARNING: Removing unreachable block (ram,0x0170b078) */

undefined8 * FUN_0170adb0(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar9;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_80;
  longlong *local_68;
  char local_60;
  longlong *local_40;
  char local_38;
  
  FUN_0170ac80();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  plVar7 = *(longlong **)(unaff_RSI + 0x40);
  if (plVar7 == (longlong *)0x0) {
    FUN_00d8ede0();
    plVar7 = local_68;
    if (local_60 != '\0') goto LAB_0170ae36;
    if (local_68 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
    FUN_00d50b00();
  }
  else {
    FUN_00d50b00();
LAB_0170ae36:
    local_60 = '\0';
  }
  if ((local_68 == (longlong *)0x0) || (plVar7 == (longlong *)0x0)) {
LAB_0170b2e1:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (plVar7 == (longlong *)0x0) goto LAB_0170b2f8;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &DAT_02572358;
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c6490();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0170af0b;
      }
    }
    else if (local_68 != (longlong *)0x0) {
LAB_0170af0b:
      if (0 < *(int *)((longlong)local_68 + 0xc)) {
        lVar9 = 0;
        do {
          plVar1 = *(longlong **)(local_68[2] + lVar9 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0170ac80();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
              goto LAB_0170afca;
            }
          }
          else {
LAB_0170afca:
            if ((local_40 == (longlong *)0x0) || (local_40 != local_68)) {
              if (local_40 == (longlong *)0x0) goto LAB_0170af4d;
            }
            else {
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
              if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                plVar8 = (longlong *)plVar1[8];
                if (plVar8 == (longlong *)0x0) goto LAB_0170b020;
LAB_0170b0a0:
                FUN_00d50b00();
                local_38 = '\x01';
                local_40 = plVar8;
                if (plVar7 != plVar8) goto LAB_0170b0c1;
LAB_0170b03a:
                cVar2 = '\x01';
                plVar8 = plVar7;
              }
              else {
                plVar8 = *(longlong **)
                          (plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x40);
                if (plVar8 != (longlong *)0x0) goto LAB_0170b0a0;
LAB_0170b020:
                FUN_00d8ede0();
                if (plVar7 == local_40) goto LAB_0170b03a;
LAB_0170b0c1:
                pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
                if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                  lVar5 = plVar1[8];
                  if (lVar5 == 0) goto LAB_0170b0f9;
LAB_0170b132:
                  FUN_00d50b00();
                  local_a8 = '\x01';
                  local_b0 = lVar5;
LAB_0170b14f:
                  pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
                  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
                    lVar5 = plVar1[8];
                    if (lVar5 == 0) goto LAB_0170b187;
LAB_0170b1ca:
                    FUN_00d50b00();
                    local_a0 = lVar5;
LAB_0170b1e0:
                    local_98 = '\0';
                    local_80 = local_a0;
                  }
                  else {
                    lVar5 = *(longlong *)
                             (plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x40);
                    if (lVar5 != 0) goto LAB_0170b1ca;
LAB_0170b187:
                    FUN_00d8ede0();
                    if (local_98 != '\0') goto LAB_0170b1e0;
                    if (local_a0 != 0) {
                      FUN_00d50b00();
                    }
                    local_80 = local_a0;
                  }
                  cVar2 = (**(code **)(*plVar7 + 0x50))();
                  if (local_80 != 0) {
                    FUN_00d50b20();
                  }
                  local_a0 = local_80;
                  if ((local_98 != '\0') && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  lVar5 = *(longlong *)
                           (plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x40);
                  if (lVar5 != 0) goto LAB_0170b132;
LAB_0170b0f9:
                  FUN_00d8ede0();
                  if (local_b0 != 0) goto LAB_0170b14f;
                  cVar2 = '\0';
                }
                plVar8 = local_40;
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar2 != '\0') {
                local_38 = '\0';
                FUN_00d21140();
                local_40 = plVar1;
              }
            }
            FUN_00d50b20();
          }
LAB_0170af4d:
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < *(int *)((longlong)local_68 + 0xc));
      }
      FUN_01911350();
      FUN_00d50b20();
    }
    if (*(int *)((longlong)puVar3 + 0xc) == 0) {
      FUN_00d50b20();
      goto LAB_0170b2e1;
    }
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  FUN_00d50b20();
LAB_0170b2f8:
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


