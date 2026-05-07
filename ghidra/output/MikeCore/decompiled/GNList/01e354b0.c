// Function: FUN_01e354b0
// Address: 01e354b0
// Size: 625 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e356ab) */
/* WARNING: Removing unreachable block (ram,0x01e356c5) */
/* WARNING: Removing unreachable block (ram,0x01e356ce) */
/* WARNING: Removing unreachable block (ram,0x01e355fa) */
/* WARNING: Removing unreachable block (ram,0x01e35603) */
/* WARNING: Removing unreachable block (ram,0x01e35704) */
/* WARNING: Removing unreachable block (ram,0x01e35711) */

void FUN_01e354b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong **pplVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong *local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar1 != 0) {
    local_a0 = 0;
    local_a8 = (longlong *)0x0;
    local_88 = 0;
    local_90 = 0;
    local_98 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        local_a8 = plVar2;
        FUN_00081d60();
        pplVar4 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar4 = &local_a8;
          if (cVar3 == '\0') {
            pplVar4 = (longlong **)&DAT_02802688;
          }
        }
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (*pplVar4 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_01e355b4;
          }
        }
        else {
          *(undefined1 *)(pplVar4 + 1) = 0;
          if (*pplVar4 != (longlong *)0x0) {
LAB_01e355b4:
            FUN_01d25f70();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
                goto LAB_01e3560b;
              }
            }
            else if (local_40 != 0) {
LAB_01e3560b:
              plVar2 = (longlong *)*unaff_RSI;
              FUN_00c7e7b0();
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              (**(code **)(*plVar2 + 0x420))();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              if (local_68 != 0) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        lVar5 = lVar5 + 1;
        local_90 = CONCAT44(local_90._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  return;
}


