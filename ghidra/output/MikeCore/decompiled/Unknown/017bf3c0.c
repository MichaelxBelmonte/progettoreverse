// Function: FUN_017bf3c0
// Address: 017bf3c0
// Size: 587 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x017bf5c3) */
/* WARNING: Removing unreachable block (ram,0x017bf5cc) */
/* WARNING: Removing unreachable block (ram,0x017bf581) */
/* WARNING: Removing unreachable block (ram,0x017bf58e) */
/* WARNING: Removing unreachable block (ram,0x017bf43f) */
/* WARNING: Removing unreachable block (ram,0x017bf448) */

undefined8 * FUN_017bf3c0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar3;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*(longlong *)*unaff_RSI + 1000))();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      goto LAB_017bf44d;
    }
  }
  else if (local_70 != 0) {
LAB_017bf44d:
    if (0 < *(int *)(local_70 + 0xc)) {
      lVar3 = 0;
      do {
        cVar1 = (**(code **)(**(longlong **)(*(longlong *)(local_70 + 0x10) + lVar3 * 8) + 0x3a0))()
        ;
        if (cVar1 == '\0') {
          cVar1 = FUN_017ab080();
          if (cVar1 != '\0') {
            FUN_017b2910();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
                goto LAB_017bf5a9;
              }
            }
            else if (local_40 != 0) {
LAB_017bf5a9:
              local_38 = '\0';
              FUN_00d21140();
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_017bf3c0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_017bf560;
            }
          }
          else if (local_40 != 0) {
LAB_017bf560:
            local_38 = '\0';
            FUN_00d214d0();
            FUN_00d50b20();
          }
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(local_70 + 0xc));
    }
    FUN_00115910();
    *unaff_RDI = puVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return unaff_RDI;
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


