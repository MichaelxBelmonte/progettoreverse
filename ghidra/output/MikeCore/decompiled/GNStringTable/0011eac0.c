// Function: FUN_0011eac0
// Address: 0011eac0
// Size: 601 bytes
// Class: GNStringTable


/* WARNING: Removing unreachable block (ram,0x0011ed15) */
/* WARNING: Removing unreachable block (ram,0x0011ed22) */

longlong * FUN_0011eac0(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  iVar3 = FUN_01d70da0();
  if (-1 < iVar3) {
    FUN_00757c60();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      if (0 < *(int *)(local_68 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(local_68 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          iVar1 = *(int *)(local_40 + 0xc);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (0 < iVar1) {
            if (iVar3 == 0) {
              *(undefined1 *)(unaff_RDI + 1) = 0;
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              *unaff_RDI = lVar2;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              FUN_000be170();
              FUN_00d50b20();
              return unaff_RDI;
            }
            iVar3 = iVar3 + -1;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(local_68 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


