// Function: FUN_019c5150
// Address: 019c5150
// Size: 1690 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c5704) */
/* WARNING: Removing unreachable block (ram,0x019c5720) */
/* WARNING: Removing unreachable block (ram,0x019c5725) */
/* WARNING: Removing unreachable block (ram,0x019c572d) */
/* WARNING: Removing unreachable block (ram,0x019c5732) */
/* WARNING: Removing unreachable block (ram,0x019c5794) */
/* WARNING: Removing unreachable block (ram,0x019c579d) */
/* WARNING: Removing unreachable block (ram,0x019c570a) */
/* WARNING: Removing unreachable block (ram,0x019c5753) */
/* WARNING: Removing unreachable block (ram,0x019c570f) */
/* WARNING: Removing unreachable block (ram,0x019c5434) */
/* WARNING: Removing unreachable block (ram,0x019c5450) */
/* WARNING: Removing unreachable block (ram,0x019c5455) */
/* WARNING: Removing unreachable block (ram,0x019c545d) */
/* WARNING: Removing unreachable block (ram,0x019c5462) */
/* WARNING: Removing unreachable block (ram,0x019c54c4) */
/* WARNING: Removing unreachable block (ram,0x019c54cd) */
/* WARNING: Removing unreachable block (ram,0x019c543a) */
/* WARNING: Removing unreachable block (ram,0x019c5483) */
/* WARNING: Removing unreachable block (ram,0x019c543f) */
/* WARNING: Removing unreachable block (ram,0x019c51f3) */
/* WARNING: Removing unreachable block (ram,0x019c51ff) */
/* WARNING: Removing unreachable block (ram,0x019c51a6) */
/* WARNING: Removing unreachable block (ram,0x019c51b2) */
/* WARNING: Removing unreachable block (ram,0x019c52c9) */
/* WARNING: Removing unreachable block (ram,0x019c52d5) */
/* WARNING: Removing unreachable block (ram,0x019c54fe) */
/* WARNING: Removing unreachable block (ram,0x019c5560) */
/* WARNING: Removing unreachable block (ram,0x019c5565) */
/* WARNING: Removing unreachable block (ram,0x019c556d) */
/* WARNING: Removing unreachable block (ram,0x019c5576) */
/* WARNING: Removing unreachable block (ram,0x019c57b6) */
/* WARNING: Removing unreachable block (ram,0x019c57c3) */
/* WARNING: Removing unreachable block (ram,0x019c5504) */
/* WARNING: Removing unreachable block (ram,0x019c5509) */
/* WARNING: Removing unreachable block (ram,0x019c5511) */
/* WARNING: Removing unreachable block (ram,0x019c54ad) */
/* WARNING: Removing unreachable block (ram,0x019c54ba) */
/* WARNING: Removing unreachable block (ram,0x019c559b) */
/* WARNING: Removing unreachable block (ram,0x019c55a7) */
/* WARNING: Removing unreachable block (ram,0x019c584a) */
/* WARNING: Removing unreachable block (ram,0x019c5857) */
/* WARNING: Removing unreachable block (ram,0x019c5818) */
/* WARNING: Removing unreachable block (ram,0x019c5825) */
/* WARNING: Removing unreachable block (ram,0x019c553b) */
/* WARNING: Removing unreachable block (ram,0x019c5548) */
/* WARNING: Removing unreachable block (ram,0x019c577d) */
/* WARNING: Removing unreachable block (ram,0x019c578a) */

longlong * FUN_019c5150(void)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00243390();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01271180();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      uVar3 = 0;
      do {
        uVar4 = (ulonglong)uVar3;
        FUN_01266770();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        while( true ) {
          pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          if (local_40 == 0) {
            cVar1 = '\0';
          }
          else {
            pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') break;
          pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
        }
        FUN_01266b80();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        while( true ) {
          pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          if (local_40 == 0) {
            cVar1 = '\0';
          }
          else {
            pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') break;
          pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(local_78 + 0xc));
    }
    FUN_01a02020();
    FUN_00d50b20();
  }
  *unaff_RDI = local_78;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


