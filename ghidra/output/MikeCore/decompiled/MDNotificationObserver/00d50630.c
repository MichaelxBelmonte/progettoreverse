// Function: FUN_00d50630
// Address: 00d50630
// Size: 722 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDPropertyObserver"


/* WARNING: Removing unreachable block (ram,0x00d508bd) */
/* WARNING: Removing unreachable block (ram,0x00d508ca) */
/* WARNING: Removing unreachable block (ram,0x00d50884) */
/* WARNING: Removing unreachable block (ram,0x00d50891) */
/* WARNING: Removing unreachable block (ram,0x00d506f6) */
/* WARNING: Removing unreachable block (ram,0x00d506ff) */
/* WARNING: Removing unreachable block (ram,0x00d507c9) */
/* WARNING: Removing unreachable block (ram,0x00d5082f) */
/* WARNING: Removing unreachable block (ram,0x00d50845) */
/* WARNING: Removing unreachable block (ram,0x00d5084e) */
/* WARNING: Removing unreachable block (ram,0x00d50853) */
/* WARNING: Removing unreachable block (ram,0x00d5089b) */
/* WARNING: Removing unreachable block (ram,0x00d5085f) */
/* WARNING: Removing unreachable block (ram,0x00d5073e) */

void FUN_00d50630(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  int iVar5;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  
  plVar4 = (longlong *)*unaff_RDI;
  FUN_00e8b690();
  if (plVar4 == (longlong *)0x0) {
LAB_00d50675:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar4 = unaff_RDI;
    if (cVar1 == '\0') goto LAB_00d50675;
  }
  if (*plVar4 != 0) {
    return;
  }
  (**(code **)(*(longlong *)*unaff_RDI + 0x360))();
  lVar3 = FUN_00e86210();
  if (lVar3 != 0) {
    FUN_00e31530();
  }
  FUN_00c81c60();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00d508e5;
    FUN_00e31530();
  }
  else if (local_80 == 0) goto LAB_00d508e5;
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar5 = 0;
    do {
      cVar1 = FUN_00d77e10();
      if (cVar1 != '\0') {
        FUN_00d77be0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          FUN_00d76b90();
          FUN_00d8b910();
          iVar2 = FUN_00e7ddf0();
          if ((iVar2 == 0) || (iVar2 = FUN_00e7ddf0(), iVar2 == 0)) {
            (**(code **)(*(longlong *)*unaff_RDI + 0x210))();
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_80 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
LAB_00d508e5:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


