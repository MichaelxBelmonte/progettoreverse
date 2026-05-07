// Function: FUN_00def740
// Address: 00def740
// Size: 598 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00def8f5) */
/* WARNING: Removing unreachable block (ram,0x00def8fe) */

ulonglong FUN_00def740(void)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar3;
  longlong *plVar4;
  undefined7 uVar5;
  int iVar6;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_60;
  undefined1 local_58;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if (*unaff_RSI == unaff_RDI) goto LAB_00def7b7;
  if (*unaff_RSI != 0) {
    FUN_00d4efa0();
    FUN_00d4efa0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 == local_60) {
      plVar4 = *(longlong **)(unaff_RDI + 0x20);
      if (plVar4 != (longlong *)0x0) {
        lVar1 = *(longlong *)(*unaff_RSI + 0x20);
        if (lVar1 != 0) {
          FUN_00d50b00();
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          uVar3 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') goto LAB_00def7b7;
          plVar4 = *(longlong **)(unaff_RDI + 0x20);
          if (plVar4 == (longlong *)0x0) goto LAB_00def878;
        }
        lVar1 = *(longlong *)(*unaff_RSI + 0x20);
        if (lVar1 != 0) {
          FUN_00d50b00();
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') goto LAB_00def7b4;
        }
      }
LAB_00def878:
      lVar1 = *(longlong *)(unaff_RDI + 0x30);
      uVar5 = (undefined7)((ulonglong)lVar1 >> 8);
      if (lVar1 != 0) {
        iVar6 = 0;
        do {
          if (*(int *)(lVar1 + 0xc) <= iVar6) {
            FUN_00018280();
            goto LAB_00def90e;
          }
          cVar2 = FUN_00d23d70();
          iVar6 = iVar6 + 1;
        } while (cVar2 == '\0');
        FUN_00018280();
        uVar3 = CONCAT71(uVar5,1);
        goto LAB_00def7b7;
      }
LAB_00def90e:
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
      if (lVar1 != 0) {
        iVar6 = 0;
        uVar3 = CONCAT71(uVar5,1);
        do {
          if (*(int *)(lVar1 + 0xc) <= iVar6) {
            FUN_00018280();
            goto LAB_00def7b4;
          }
          cVar2 = FUN_00defac0();
          iVar6 = iVar6 + 1;
        } while (cVar2 == '\0');
        FUN_00018280();
        goto LAB_00def7b7;
      }
    }
  }
LAB_00def7b4:
  uVar3 = 0;
LAB_00def7b7:
  return uVar3 & 0xffffffff;
}


