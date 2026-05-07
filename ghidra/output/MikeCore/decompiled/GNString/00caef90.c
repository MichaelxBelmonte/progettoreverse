// Function: FUN_00caef90
// Address: 00caef90
// Size: 644 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00caefdd) */
/* WARNING: Removing unreachable block (ram,0x00caefe6) */
/* WARNING: Removing unreachable block (ram,0x00caf020) */
/* WARNING: Removing unreachable block (ram,0x00caf029) */
/* WARNING: Removing unreachable block (ram,0x00caf0e7) */
/* WARNING: Removing unreachable block (ram,0x00caf110) */
/* WARNING: Removing unreachable block (ram,0x00caf0e9) */
/* WARNING: Removing unreachable block (ram,0x00caf112) */

void FUN_00caef90(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *unaff_RDI;
  int local_40;
  
  (**(code **)(*unaff_RDI + 0x470))();
  if (DAT_028a7308 != 0) {
    FUN_00d50b00();
    cVar2 = FUN_00d23d70();
    FUN_00d50b20();
    if (cVar2 != '\0') {
      FUN_00d50b00();
      FUN_00d23f50();
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x12] != 0) {
    if (unaff_RDI[0x14] != 0) {
      iVar3 = FUN_00c8d630();
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar5 = FUN_00c8df10();
          if (lVar5 != 0) {
            lVar1 = *(longlong *)(lVar5 + 8);
            if (lVar1 != 0) {
              local_40 = -1;
              while( true ) {
                lVar6 = (longlong)local_40;
                local_40 = local_40 + 1;
                if (*(int *)(lVar1 + 0xc) <= local_40) break;
                lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar6 * 8);
                if ((*(char *)(lVar6 + 0x39) != '\0') && (*(longlong *)(lVar6 + 0x18) != 0)) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar6 = *(longlong *)(lVar6 + 0x20);
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00e8c420();
                  if (lVar6 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00cc12b0();
              if (*(longlong *)(lVar5 + 8) != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00e83070();
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_00c8d630();
        } while (iVar3 < iVar4);
      }
      FUN_00c8d5b0();
    }
    if (unaff_RDI[0x17] != 0) {
      FUN_00c8d5b0();
    }
  }
  FUN_00d50110();
  return;
}


