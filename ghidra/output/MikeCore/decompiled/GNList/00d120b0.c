// Function: FUN_00d120b0
// Address: 00d120b0
// Size: 910 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d12378) */
/* WARNING: Removing unreachable block (ram,0x00d12381) */
/* WARNING: Removing unreachable block (ram,0x00d1219f) */
/* WARNING: Removing unreachable block (ram,0x00d121ab) */
/* WARNING: Removing unreachable block (ram,0x00d12200) */
/* WARNING: Removing unreachable block (ram,0x00d12209) */

void FUN_00d120b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_0277c938;
  if (*param_2 == 0) {
    if (DAT_0277c938 != 0) {
      FUN_00d50b00();
    }
    FUN_00df3740();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    _ZSTD_compressBound();
    iVar2 = _ZSTD_isError();
    lVar1 = DAT_02787228;
    if (iVar2 == 0) {
      FUN_00c8e710();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      lVar1 = DAT_0277c940;
      if (local_40 != 0) {
        _ZSTD_compress((longlong)*(int *)(*param_2 + 0x18),*(undefined8 *)(*param_2 + 0x10),
                       *(undefined4 *)(unaff_RSI + 0xc));
        iVar2 = _ZSTD_isError();
        lVar1 = DAT_02787228;
        if (iVar2 != 0) {
          if (DAT_02787228 != 0) {
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
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          FUN_00d50b20();
          return;
        }
        FUN_00c8e340();
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
      if (DAT_0277c940 != 0) {
        FUN_00d50b00();
      }
      FUN_00df3740();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_02787228 != 0) {
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
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


