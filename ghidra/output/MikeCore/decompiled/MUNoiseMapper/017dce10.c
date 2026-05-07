// Function: FUN_017dce10
// Address: 017dce10
// Size: 873 bytes
// Class: MUNoiseMapper


/* WARNING: Removing unreachable block (ram,0x017dd101) */
/* WARNING: Removing unreachable block (ram,0x017dd10a) */
/* WARNING: Removing unreachable block (ram,0x017dd019) */
/* WARNING: Removing unreachable block (ram,0x017dd029) */
/* WARNING: Removing unreachable block (ram,0x017dd152) */
/* WARNING: Removing unreachable block (ram,0x017dd15f) */
/* WARNING: Removing unreachable block (ram,0x017dce6f) */
/* WARNING: Removing unreachable block (ram,0x017dce78) */
/* WARNING: Removing unreachable block (ram,0x017dced7) */
/* WARNING: Removing unreachable block (ram,0x017dcf00) */
/* WARNING: Removing unreachable block (ram,0x017dced9) */
/* WARNING: Removing unreachable block (ram,0x017dcf02) */

void FUN_017dce10(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  pthread_key_t unaff_ESI;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  int local_40;
  
  if ((*unaff_RDI != 0) && (*(int *)(*unaff_RDI + 0xc) != 0)) {
    FUN_00c8e710();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar2 = *unaff_RDI;
    if (lVar2 != 0) {
      local_40 = -1;
      while( true ) {
        lVar5 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar2 + 0xc) <= local_40) break;
        lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar5 * 8);
        pVar8 = unaff_ESI;
        iVar3 = FUN_017e4480();
        pvVar6 = _pthread_getspecific(pVar8);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        iVar4 = *(int *)(lVar5 + 0x38);
        if (iVar4 == -1000000) {
          if (*(longlong *)(lVar5 + 0x40) == 0) {
            iVar4 = -1000000;
          }
          else {
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar4 = FUN_01508300();
            *(int *)(lVar5 + 0x38) = iVar4;
          }
        }
        iVar1 = *(int *)(local_58 + 0x18);
        FUN_00c8e340();
        *(int *)(*(longlong *)(local_58 + 0x10) + (longlong)iVar1) = iVar3 - iVar4;
      }
      FUN_01916320();
    }
    FUN_00e7bcc0();
    FUN_017dd2b0();
    lVar2 = *unaff_RDI;
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 0xc)) {
        iVar3 = 0;
        do {
          FUN_017e45c0();
          FUN_00e7bac0();
          FUN_017e4520();
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(lVar2 + 0xc));
      }
      FUN_01916320();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


