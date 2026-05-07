// Function: FUN_00c7e840
// Address: 00c7e840
// Size: 544 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c7e911) */
/* WARNING: Removing unreachable block (ram,0x00c7e91a) */
/* WARNING: Removing unreachable block (ram,0x00c7e9ed) */
/* WARNING: Removing unreachable block (ram,0x00c7e9f6) */

undefined8 * FUN_00c7e840(void)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar5;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00c80a40();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00c7e8d2;
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
LAB_00c7e8d2:
    bVar2 = true;
    lVar1 = *(longlong *)(unaff_RSI + 0x38);
    goto joined_r0x00c7e93a;
  }
  FUN_00c7e840();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d214d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  bVar2 = false;
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
joined_r0x00c7e93a:
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        cVar3 = FUN_00e2d190();
        if (cVar3 != '\0') {
          FUN_00e2cf70();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d21140();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00c89410();
    FUN_00d50b20();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


