// Function: FUN_01c0f300
// Address: 01c0f300
// Size: 625 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c0f4b4) */
/* WARNING: Removing unreachable block (ram,0x01c0f4c0) */

longlong * FUN_01c0f300(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong **pplVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_a0;
  char local_98;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  
  FUN_01c1afc0();
  plVar3 = local_80;
  if (local_78 == '\0') {
    if (local_80 == (longlong *)0x0) goto LAB_01c0f528;
    FUN_00d50b00();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_80 == (longlong *)0x0) goto LAB_01c0f528;
  local_78 = '\0';
  local_80 = (longlong *)0x0;
  local_70 = plVar3;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)((longlong)plVar3 + 0xc)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(plVar3[2] + lVar7 * 8);
      local_80 = plVar1;
      FUN_01c28c50();
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar6 = &local_80;
        if (cVar5 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar2 = *pplVar6;
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01c0f435;
        }
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
        if (plVar2 != (longlong *)0x0) {
LAB_01c0f435:
          local_48 = plVar2;
          FUN_01c10db0();
          (**(code **)(*(longlong *)*param_2 + 0x370))();
          lVar4 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          cVar5 = FUN_00d23d70();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if (cVar5 != '\0') {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (local_78 == '\0') {
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *unaff_RDI = (longlong)plVar1;
              *(undefined1 *)(unaff_RDI + 1) = 1;
            }
            else {
              *unaff_RDI = (longlong)plVar1;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              local_78 = '\0';
            }
            FUN_00d50b20();
            FUN_01c10620();
            FUN_00d50b20();
            return unaff_RDI;
          }
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      local_68 = CONCAT44(local_68._4_4_,(int)lVar7);
    } while ((int)lVar7 < *(int *)((longlong)plVar3 + 0xc));
  }
  FUN_01c10620();
  FUN_00d50b20();
LAB_01c0f528:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


