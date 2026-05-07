// Function: FUN_000c67f0
// Address: 000c67f0
// Size: 536 bytes
// Class: GNRootView


ulonglong FUN_000c67f0(undefined8 param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong lVar9;
  undefined1 *local_res8;
  char *local_res10;
  longlong *local_res18;
  longlong local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(longlong *)(unaff_RDI + 0x168) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x168) + 0x10);
    iVar4 = *(int *)(lVar2 + 0xc);
    if (0 < iVar4) {
      lVar9 = 0;
      do {
        lVar7 = *(longlong *)(lVar2 + 0x10);
        if (*(longlong *)(*(longlong *)(lVar7 + lVar9 * 8) + 0x308) == 0) {
          FUN_0051b4f0();
          pVar6 = (pthread_key_t)lVar7;
          lVar7 = *param_2;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == lVar7) {
            FUN_00d50b00();
            if (*local_res10 == '\0') {
              cVar3 = FUN_0052f210();
              *local_res10 = cVar3;
            }
            *param_3 = 1;
            *param_4 = 0;
            *local_res8 = 0;
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            lVar2 = *local_res18;
            if (lVar2 == local_40) {
              if (((char)local_res18[1] == '\0') && (local_40 != 0)) {
                if (local_38 != '\0') goto LAB_000c6985;
                FUN_00d50b00();
                goto LAB_000c69c1;
              }
LAB_000c69c5:
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar9 = local_res18[1];
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
                *local_res18 = local_40;
                if (((char)lVar9 != '\0') && (lVar2 != 0)) {
                  FUN_00d50b20();
                }
LAB_000c69c1:
                *(undefined1 *)(local_res18 + 1) = 1;
                goto LAB_000c69c5;
              }
              *local_res18 = local_40;
              if (((char)lVar9 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_000c6985:
              *(undefined1 *)(local_res18 + 1) = 1;
            }
            uVar8 = 0;
            goto LAB_000c69de;
          }
          iVar4 = *(int *)(lVar2 + 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      uVar8 = CONCAT71((int7)((ulonglong)local_res10 >> 8),1);
    }
  }
LAB_000c69de:
  (**(code **)(*plVar1 + 0x378))();
  if ((char)uVar8 == '\0') {
    FUN_00d50b20();
  }
  return (uVar8 ^ 1) & 0xffffffff;
}


