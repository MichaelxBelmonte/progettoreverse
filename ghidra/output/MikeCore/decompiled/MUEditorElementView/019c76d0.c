// Function: FUN_019c76d0
// Address: 019c76d0
// Size: 699 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c772a) */
/* WARNING: Removing unreachable block (ram,0x019c7733) */

ulonglong FUN_019c76d0(pthread_key_t param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(ulonglong *)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270ab0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012df8d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(ulonglong *)(uVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_012708c0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012df8d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}


