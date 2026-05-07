// Function: FUN_01a9d1d0
// Address: 01a9d1d0
// Size: 546 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a9d267) */
/* WARNING: Removing unreachable block (ram,0x01a9d270) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01a9d1d0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  ulonglong uVar6;
  longlong local_48;
  char local_40;
  
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    dVar3 = (double)FUN_01a991f0();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    uVar1 = *(uint *)(local_48 + 0xc);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + uVar6 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(in_ECX);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        dVar4 = (double)FUN_01a99d00();
        if ((double)((ulonglong)((double)(float)param_1 - dVar4) & _DAT_023908f0) < DAT_02423860) {
          pvVar5 = _pthread_getspecific(in_ECX);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faf20();
          dVar4 = (double)FUN_01a99230();
          if ((double)((ulonglong)
                       ((double)((float)dVar3 - (float)((ulonglong)param_1 >> 0x20)) - dVar4) &
                      _DAT_023908f0) < DAT_02423860) {
            *unaff_RDI = lVar2;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            goto LAB_01a9d3f1;
          }
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
LAB_01a9d3f1:
    FUN_00d50b20();
  }
  return unaff_RDI;
}


