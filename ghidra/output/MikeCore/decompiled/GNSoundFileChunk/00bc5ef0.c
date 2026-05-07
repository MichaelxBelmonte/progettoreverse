// Function: FUN_00bc5ef0
// Address: 00bc5ef0
// Size: 508 bytes
// Class: GNSoundFileChunk


/* WARNING: Removing unreachable block (ram,0x00bc5fa3) */
/* WARNING: Removing unreachable block (ram,0x00bc5fac) */
/* WARNING: Removing unreachable block (ram,0x00bc60bb) */
/* WARNING: Removing unreachable block (ram,0x00bc60c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc5ef0(void)

{
  longlong lVar1;
  int iVar2;
  double *pdVar3;
  byte bVar4;
  undefined8 uVar5;
  double dVar6;
  double local_48;
  longlong local_40;
  char local_38;
  
  _DAT_028024f0 = FUN_00e7d6f0();
  do {
    iVar2 = FUN_00e31390();
    if (iVar2 != 0) {
      return;
    }
    local_48 = (double)FUN_00e7d6f0();
    do {
      uVar5 = FUN_00bcac20();
      if (local_38 == '\0') {
        if (local_40 == 0) goto LAB_00bc5f20;
        uVar5 = FUN_00d50b00();
      }
      else if (local_40 == 0) {
LAB_00bc5f20:
        FUN_00e8f8c0();
        FUN_00dee5a0(DAT_023908c8);
        bVar4 = 0;
        break;
      }
      lVar1 = *(longlong *)(local_40 + 0x10);
      if (lVar1 != 0) {
        uVar5 = FUN_00d50b00();
      }
      FUN_00b86b80(uVar5,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        bVar4 = 4;
      }
      else {
        FUN_00bc7a00();
        dVar6 = (double)FUN_00e7d6f0();
        dVar6 = dVar6 - *(double *)(local_40 + 0x20);
        pdVar3 = &DAT_02765b68;
        if ((dVar6 < DAT_02765b68) || (pdVar3 = &DAT_028024e8, DAT_028024e8 < dVar6)) {
          *pdVar3 = dVar6;
        }
        dVar6 = (double)FUN_00e7d6f0();
        FUN_00e31570(CONCAT44((int)((ulonglong)(dVar6 - local_48) >> 0x20),(float)(dVar6 - local_48)
                             ));
        iVar2 = FUN_00e31390();
        bVar4 = iVar2 != 0;
        FUN_00d50b20();
        local_48 = dVar6;
      }
      FUN_00d50b20();
    } while ((bVar4 & 3) == 0);
    if (bVar4 != 0) {
      return;
    }
  } while( true );
}


