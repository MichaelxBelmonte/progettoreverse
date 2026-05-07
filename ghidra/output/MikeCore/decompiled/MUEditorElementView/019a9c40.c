// Function: FUN_019a9c40
// Address: 019a9c40
// Size: 838 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019a9d89) */
/* WARNING: Removing unreachable block (ram,0x019a9d92) */

longlong * FUN_019a9c40(undefined8 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar6;
  bool bVar7;
  longlong local_d8;
  char local_d0;
  undefined8 local_78;
  longlong local_58;
  char local_50;
  undefined8 local_40;
  longlong local_38;
  
  local_78 = 0;
  if (((param_2 == 0) || ((longlong *)unaff_RSI[0x69] == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)unaff_RSI[0x69] + 0xb0))(), cVar2 == '\0')) {
    local_40 = 0;
    lVar4 = unaff_RSI[0x3d];
    if (lVar4 != 0) goto LAB_019a9cdd;
LAB_019a9cb7:
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_019a9cbf:
    local_38 = 0;
  }
  else {
    local_78 = (**(code **)(*(longlong *)unaff_RSI[0x69] + 0xc0))();
    local_40 = (**(code **)(*(longlong *)unaff_RSI[0x69] + 0xd0))();
    lVar4 = unaff_RSI[0x3d];
    if (lVar4 == 0) goto LAB_019a9cb7;
LAB_019a9cdd:
    if (*(int *)(lVar4 + 0xc) < 1) {
      bVar1 = false;
      local_38 = 0;
    }
    else {
      iVar6 = 0;
      local_38 = 0;
      bVar1 = false;
      do {
        lVar5 = lVar4;
        cVar2 = (**(code **)(*unaff_RSI + 0x9a0))();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific((pthread_key_t)lVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*unaff_RSI + 0x9f0))();
          FUN_019a9940(local_78,local_40);
          if (local_d8 == local_38) {
            if (local_d0 != '\0') {
              if ((!bVar1) && (local_d8 != 0)) {
                bVar1 = true;
                FUN_00d50b00();
              }
              bVar7 = local_38 == 0;
              goto joined_r0x019a9ec9;
            }
            bVar7 = local_38 == 0;
          }
          else {
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_38 != 0)) {
              FUN_00d50b20();
            }
            bVar7 = local_d8 == 0;
            local_38 = local_d8;
            if (local_d0 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
joined_r0x019a9ec9:
              if (local_d8 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (!bVar7) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1) {
      *unaff_RDI = local_38;
      goto LAB_019a9f75;
    }
    if (local_38 == 0) goto LAB_019a9cbf;
    FUN_00d50b00();
  }
  *unaff_RDI = local_38;
LAB_019a9f75:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


