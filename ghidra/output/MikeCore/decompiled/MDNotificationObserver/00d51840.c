// Function: FUN_00d51840
// Address: 00d51840
// Size: 807 bytes
// Class: MDNotificationObserver


/* WARNING: Removing unreachable block (ram,0x00d51b3a) */
/* WARNING: Removing unreachable block (ram,0x00d51b43) */
/* WARNING: Removing unreachable block (ram,0x00d51ad2) */
/* WARNING: Removing unreachable block (ram,0x00d51adb) */
/* WARNING: Removing unreachable block (ram,0x00d51b04) */
/* WARNING: Removing unreachable block (ram,0x00d51b0d) */
/* WARNING: Removing unreachable block (ram,0x00d518e8) */
/* WARNING: Removing unreachable block (ram,0x00d518f4) */
/* WARNING: Removing unreachable block (ram,0x00d51a16) */
/* WARNING: Removing unreachable block (ram,0x00d51a1f) */
/* WARNING: Removing unreachable block (ram,0x00d51a67) */
/* WARNING: Removing unreachable block (ram,0x00d51a90) */
/* WARNING: Removing unreachable block (ram,0x00d51a69) */
/* WARNING: Removing unreachable block (ram,0x00d51a92) */

undefined8 * FUN_00d51840(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar5;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  char local_50;
  int local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x360))();
  FUN_00e86210();
  FUN_00c85c00();
  if (local_a0 == '\0') {
    if (local_a8 == 0) goto LAB_00d51b70;
    FUN_00e31530();
  }
  else if (local_a8 == 0) goto LAB_00d51b70;
  if (0 < *(int *)(local_a8 + 0xc)) {
    iVar5 = 0;
    do {
      lVar1 = local_58;
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        (**(code **)(*unaff_RSI + 0x210))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00e31530();
            goto LAB_00d51b20;
          }
        }
        else if (local_58 != 0) {
LAB_00d51b20:
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RSI + 0x210))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00e31530();
            goto LAB_00d51a30;
          }
        }
        else if (local_58 != 0) {
LAB_00d51a30:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar4 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar1 + 0xc) <= local_40) break;
            local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
            FUN_00d21140();
          }
          FUN_00083b20();
          FUN_00d50b20();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_a8 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
LAB_00d51b70:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


