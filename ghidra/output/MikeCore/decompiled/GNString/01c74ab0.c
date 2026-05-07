// Function: FUN_01c74ab0
// Address: 01c74ab0
// Size: 911 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c74d96) */
/* WARNING: Removing unreachable block (ram,0x01c74d53) */
/* WARNING: Removing unreachable block (ram,0x01c74c7a) */
/* WARNING: Removing unreachable block (ram,0x01c74c68) */
/* WARNING: Removing unreachable block (ram,0x01c74c87) */
/* WARNING: Removing unreachable block (ram,0x01c74d7f) */
/* WARNING: Removing unreachable block (ram,0x01c74e32) */

ulonglong FUN_01c74ab0(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    if ((int)unaff_RDI[0x39] != 0) {
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016d8300();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        uVar3 = FUN_016bf360();
        uVar7 = (ulonglong)uVar3;
        if (((char)uVar3 != '\0') && (param_2 != '\0')) {
          lVar1 = unaff_RDI[0x31];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_016cbba0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          cVar2 = FUN_016bf360();
          if (cVar2 != '\0') {
            FUN_016bf540();
          }
          lVar1 = unaff_RDI[0x31];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar4 = _pthread_getspecific(param_1);
          if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
            lVar5 = unaff_RDI[0x42];
          }
          else {
            lVar5 = unaff_RDI[0x42];
          }
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          pVar6 = *(pthread_key_t *)(unaff_RDI + 0x39);
          FUN_016effc0(pVar6,1);
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = unaff_RDI[0x31];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_01c44d20();
          FUN_01c44700();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          FUN_01c62c70();
          lVar1 = unaff_RDI[0x31];
          if (lVar1 != 0) {
            FUN_00d50b00();
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016c1150();
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0x620))();
          *(undefined1 *)(unaff_RDI + 0x3a) = 1;
          uVar7 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        }
        goto LAB_01c74b70;
      }
    }
  }
  uVar7 = 0;
LAB_01c74b70:
  return uVar7 & 0xffffffff;
}


