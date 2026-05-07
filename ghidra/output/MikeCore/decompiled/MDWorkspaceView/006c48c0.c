// Function: FUN_006c48c0
// Address: 006c48c0
// Size: 623 bytes
// Class: MDWorkspaceView


/* WARNING: Removing unreachable block (ram,0x006c4a1d) */
/* WARNING: Removing unreachable block (ram,0x006c4a26) */
/* WARNING: Removing unreachable block (ram,0x006c4a99) */
/* WARNING: Removing unreachable block (ram,0x006c4aa2) */

void FUN_006c48c0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong **pplVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong *local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 != 0) {
    local_a8 = 0;
    local_b0 = (longlong *)0x0;
    local_90 = 0;
    local_98 = 0;
    local_a0 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_b0 = plVar2;
        FUN_003b6560();
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar6 = &local_b0;
          if (cVar5 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        plVar2 = *pplVar6;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_006c49c4;
          }
        }
        else {
          *(undefined1 *)(pplVar6 + 1) = 0;
          if (plVar2 != (longlong *)0x0) {
LAB_006c49c4:
            local_58 = plVar2;
            FUN_00543980();
            lVar3 = local_78;
            if (local_70 == '\0') {
              if (local_78 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            cVar5 = FUN_00d23d70();
            if (cVar5 == '\0') {
              cVar5 = '\0';
            }
            else {
              FUN_005439c0();
              lVar4 = local_68;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              cVar5 = FUN_00d23d70();
              if (lVar4 != 0) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if (cVar5 == '\0') {
              local_88 = local_58;
              local_80 = '\0';
              FUN_01e49bc0();
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              break;
            }
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_98 = CONCAT44(local_98._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9680();
  }
  return;
}


