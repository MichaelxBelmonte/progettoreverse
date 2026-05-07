// Function: FUN_017d13c0
// Address: 017d13c0
// Size: 537 bytes
// Class: GNList


void FUN_017d13c0(char *param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  char *pcVar4;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong lVar5;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  if (*(char *)(unaff_RDI + 0xe8) != unaff_SIL) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0xe8) = unaff_SIL;
    FUN_00d64910();
    if ((unaff_SIL != '\0') && (*(longlong *)(unaff_RDI + 0x80) != 0)) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RDI + 0x80) != 0) {
        *(undefined8 *)(unaff_RDI + 0x80) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x128);
    if (lVar1 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        local_40 = lVar1;
        do {
          lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar5 * 8);
          pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
            lVar1 = *(longlong *)(lVar1 + 0x120);
          }
          else {
            lVar1 = *(longlong *)
                     (*(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                     0x120);
          }
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d23310();
          local_38[0] = local_48[0];
          param_1 = local_38;
          pcVar4 = local_48;
          if (local_48[0] == '\0') {
            pcVar4 = param_1;
          }
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (local_50 == unaff_RDI) {
            pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017d13c0();
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(local_40 + 0xc));
      }
      FUN_018c8180();
      FUN_00d50b20();
    }
  }
  return;
}


