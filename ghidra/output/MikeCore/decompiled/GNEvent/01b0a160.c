// Function: FUN_01b0a160
// Address: 01b0a160
// Size: 793 bytes
// Class: GNEvent


/* WARNING: Removing unreachable block (ram,0x01b0a2e3) */
/* WARNING: Removing unreachable block (ram,0x01b0a2ec) */
/* WARNING: Removing unreachable block (ram,0x01b0a1a4) */
/* WARNING: Removing unreachable block (ram,0x01b0a1ad) */
/* WARNING: Removing unreachable block (ram,0x01b0a1fe) */
/* WARNING: Removing unreachable block (ram,0x01b0a207) */
/* WARNING: Removing unreachable block (ram,0x01b0a3eb) */
/* WARNING: Removing unreachable block (ram,0x01b0a3f7) */
/* WARNING: Removing unreachable block (ram,0x01b0a330) */
/* WARNING: Removing unreachable block (ram,0x01b0a350) */
/* WARNING: Removing unreachable block (ram,0x01b0a332) */
/* WARNING: Removing unreachable block (ram,0x01b0a352) */

longlong * FUN_01b0a160(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  pthread_key_t pVar7;
  longlong local_a8;
  char local_a0;
  longlong *local_88;
  char local_80;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_01a1d6e0();
  if (local_80 == '\0') {
    if (local_88 == (longlong *)0x0) goto LAB_01b0a1d6;
    FUN_00d50b00();
  }
  else if (local_88 == (longlong *)0x0) {
LAB_01b0a1d6:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  (**(code **)(*local_88 + 0x988))();
  if (local_80 == '\0') {
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b0a20c;
    }
  }
  else if (local_88 != (longlong *)0x0) {
LAB_01b0a20c:
    if (0 < *(int *)((longlong)local_88 + 0xc)) {
      pVar7 = 0;
      do {
        lVar4 = local_58;
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_01b0a2f4;
          }
        }
        else if (local_58 != 0) {
LAB_01b0a2f4:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          do {
            while( true ) {
              lVar6 = (longlong)local_40;
              local_40 = local_40 + 1;
              iVar1 = *(int *)(lVar4 + 0xc);
              if (iVar1 <= local_40) goto LAB_01b0a40e;
              lVar2 = *(longlong *)(lVar4 + 0x10);
              local_58 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
              pvVar5 = _pthread_getspecific((pthread_key_t)lVar2);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              if (local_a0 == '\0') break;
              if (local_a8 != 0) goto LAB_01b0a400;
            }
          } while (local_a8 == 0);
          FUN_00d50b00();
LAB_01b0a400:
          *unaff_RDI = local_a8;
          *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01b0a40e:
          FUN_001159b0();
          FUN_00d50b20();
          if (local_40 < iVar1) {
            FUN_000be170();
            bVar3 = true;
            goto LAB_01b0a446;
          }
        }
        pVar7 = pVar7 + 1;
      } while ((int)pVar7 < *(int *)((longlong)local_88 + 0xc));
    }
    FUN_000be170();
    bVar3 = false;
LAB_01b0a446:
    FUN_00d50b20();
    if (bVar3) goto LAB_01b0a46e;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01b0a46e:
  FUN_00d50b20();
  return unaff_RDI;
}


