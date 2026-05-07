// Function: FUN_01d3d460
// Address: 01d3d460
// Size: 513 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01d3d595) */
/* WARNING: Removing unreachable block (ram,0x01d3d59e) */

void FUN_01d3d460(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  
  if (DAT_028b80e0 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(DAT_028b80e0 + 0x10) + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar6 = *(uint *)(lVar1 + 0xc);
    if ((ulonglong)uVar6 != 0) {
      DAT_02802f88 = DAT_02802f88 + 1;
      if (0 < (int)uVar6) {
        lVar7 = (ulonglong)uVar6 + 1;
        do {
          uVar6 = uVar6 - 1;
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar6 * 8);
          FUN_00df2bc0();
          lVar3 = DAT_027efeb0;
          if (DAT_027efeb0 != 0) {
            FUN_00d50b00();
          }
          FUN_000175c0();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            local_58 = '\0';
            cVar4 = FUN_00d24090();
            local_60 = lVar2;
            if (cVar4 == '\0') {
              FUN_00df2ce0();
            }
          }
          lVar7 = lVar7 + -1;
        } while (1 < lVar7);
      }
      lVar7 = DAT_028b80f0;
      DAT_02802f88 = DAT_02802f88 + -1;
      if (DAT_02802f88 == 0) {
        if (DAT_028b80f0 != 0) {
          for (iVar5 = 0; iVar5 < *(int *)(lVar7 + 0xc); iVar5 = iVar5 + 1) {
            FUN_01d3d2c0();
          }
          FUN_01d42e40();
        }
        FUN_00d216c0();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


