// Function: FUN_012e61a0
// Address: 012e61a0
// Size: 697 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012e61f4) */
/* WARNING: Removing unreachable block (ram,0x012e6397) */
/* WARNING: Removing unreachable block (ram,0x012e63a0) */
/* WARNING: Removing unreachable block (ram,0x012e641a) */
/* WARNING: Removing unreachable block (ram,0x012e6423) */
/* WARNING: Removing unreachable block (ram,0x012e6200) */
/* WARNING: Removing unreachable block (ram,0x012e6220) */
/* WARNING: Removing unreachable block (ram,0x012e6202) */
/* WARNING: Removing unreachable block (ram,0x012e6222) */

undefined8 * FUN_012e61a0(void)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar7;
  longlong local_80;
  char local_78;
  int local_50;
  
  lVar1 = *(longlong *)(unaff_RSI + 0xa8);
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_012e62d3:
    puVar5 = (undefined8 *)0x0;
  }
  else {
    local_50 = -1;
    do {
      lVar2 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) {
        FUN_000be170();
        puVar5 = *(undefined8 **)(unaff_RSI + 0xa8);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (puVar5 == (undefined8 *)0x0) goto LAB_012e62d3;
        FUN_00d50b00();
        goto LAB_012e644b;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar2 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      lVar2 = *(longlong *)(lVar2 + 0xa8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      iVar7 = *(int *)(lVar2 + 0xc);
      FUN_00d50b20();
    } while (iVar7 == 0);
    FUN_000be170();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &DAT_02572358;
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(unaff_RSI + 0xa8);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar7 = 0;
        do {
          FUN_00d21140();
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e61a0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d214d0();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
LAB_012e644b:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


