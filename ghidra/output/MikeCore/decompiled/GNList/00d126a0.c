// Function: FUN_00d126a0
// Address: 00d126a0
// Size: 864 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d128ae) */
/* WARNING: Removing unreachable block (ram,0x00d128b7) */
/* WARNING: Removing unreachable block (ram,0x00d12758) */
/* WARNING: Removing unreachable block (ram,0x00d12764) */
/* WARNING: Removing unreachable block (ram,0x00d1293f) */
/* WARNING: Removing unreachable block (ram,0x00d1294c) */
/* WARNING: Removing unreachable block (ram,0x00d127be) */
/* WARNING: Removing unreachable block (ram,0x00d127c7) */

void FUN_00d126a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_0277c948;
  if (*param_2 == 0) {
    if (DAT_0277c948 != 0) {
      FUN_00d50b00();
    }
    FUN_00df3740();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar3 = _ZSTD_getFrameContentSize();
    iVar2 = _ZSTD_isError();
    if (iVar2 == 0) {
      FUN_00c8e710();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      _ZSTD_decompress((longlong)*(int *)(*param_2 + 0x18),*(undefined8 *)(*param_2 + 0x10));
      iVar2 = _ZSTD_isError();
      lVar3 = DAT_02787248;
      if (iVar2 == 0) {
        FUN_00c8e340();
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        if (DAT_02787248 != 0) {
          FUN_00d50b00();
        }
        _ZSTD_getErrorName();
        FUN_00d91a70();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00df3740();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = DAT_0277c958;
      if ((lVar3 == -1) || (lVar1 = DAT_0277c950, lVar3 == -2)) {
        local_40 = lVar1;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar4 = local_40 != 0;
      }
      else {
        _ZSTD_getErrorName();
        FUN_00d91a70();
        if (local_40 == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      lVar3 = DAT_02787248;
      if (DAT_02787248 != 0) {
        FUN_00d50b00();
      }
      FUN_00df3740();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


