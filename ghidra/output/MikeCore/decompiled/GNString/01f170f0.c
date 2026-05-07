// Function: FUN_01f170f0
// Address: 01f170f0
// Size: 660 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01f17151) */
/* WARNING: Removing unreachable block (ram,0x01f1715a) */
/* WARNING: Removing unreachable block (ram,0x01f1735b) */
/* WARNING: Removing unreachable block (ram,0x01f17368) */

void FUN_01f170f0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  longlong local_78;
  char local_70;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x140) + 0xc) == 0) {
    FUN_01f03a80();
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = local_58;
    local_40 = '\0';
    FUN_00d243f0();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d216c0();
  lVar4 = *(longlong *)(unaff_RDI + 0x140);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar6 = 0;
    plVar5 = (longlong *)0x0;
    bVar2 = false;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + lVar6 * 8);
      if (plVar5 == plVar1) {
        if ((!bVar2) && (plVar5 != (longlong *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar2 = true;
          plVar5 = plVar1;
        }
        else {
          bVar2 = true;
          plVar5 = plVar1;
        }
      }
      if (*(longlong *)(unaff_RDI + 0x138) != 0) {
        (**(code **)(*plVar5 + 0x5c8))();
        if (local_48 == (longlong *)0x0) {
          cVar3 = '\0';
        }
        else {
          (**(code **)(*plVar5 + 0x5c8))();
          (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x370))();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          cVar3 = (**(code **)(*local_58 + 0x50))();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_40 = '\0';
          FUN_00d21140();
          local_48 = plVar5;
        }
      }
      lVar6 = lVar6 + 1;
      lVar4 = *(longlong *)(unaff_RDI + 0x140);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
    if ((bVar2) && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


