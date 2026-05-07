// Function: FUN_017d4380
// Address: 017d4380
// Size: 876 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017d454a) */
/* WARNING: Removing unreachable block (ram,0x017d4449) */
/* WARNING: Removing unreachable block (ram,0x017d4455) */
/* WARNING: Removing unreachable block (ram,0x017d468d) */
/* WARNING: Removing unreachable block (ram,0x017d469a) */
/* WARNING: Removing unreachable block (ram,0x017d4550) */
/* WARNING: Removing unreachable block (ram,0x017d4570) */
/* WARNING: Removing unreachable block (ram,0x017d4552) */
/* WARNING: Removing unreachable block (ram,0x017d4572) */

longlong * FUN_017d4380(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar6;
  longlong lVar7;
  longlong local_b8;
  char local_b0;
  longlong local_68;
  char local_60;
  int local_50;
  longlong local_40;
  char local_38;
  
  lVar7 = *(longlong *)(unaff_RSI + 0x108);
  if (*(int *)(lVar7 + 0xc) != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
    *unaff_RDI = lVar7;
    goto LAB_017d46ea;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018c5590();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_00d243f0();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RSI + 0x108);
  if (lVar7 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_017d46e3:
    lVar7 = 0;
  }
  else {
    if (0 < *(int *)(lVar7 + 0xc)) {
      iVar6 = 0;
      do {
        lVar1 = *(longlong *)(unaff_RSI + 0x100);
        if (lVar1 != 0) {
          local_50 = -1;
          do {
            lVar3 = (longlong)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar1 + 0xc) <= local_50) goto LAB_017d44e0;
            lVar5 = *(longlong *)(lVar1 + 0x10);
            lVar3 = *(longlong *)(lVar5 + 8 + lVar3 * 8);
            pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
            pVar4 = (pthread_key_t)lVar5;
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507640();
            pvVar2 = _pthread_getspecific(pVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507640();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          } while (local_40 != local_b8);
          local_38 = '\0';
          FUN_00d233f0();
          local_40 = lVar3;
LAB_017d44e0:
          FUN_017d9a00();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar7 + 0xc));
    }
    FUN_017d9a00();
    lVar7 = *(longlong *)(unaff_RSI + 0x108);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar7 == 0) goto LAB_017d46e3;
    FUN_00d50b00();
  }
  *unaff_RDI = lVar7;
LAB_017d46ea:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


