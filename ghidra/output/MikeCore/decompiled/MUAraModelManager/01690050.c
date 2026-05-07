// Function: FUN_01690050
// Address: 01690050
// Size: 523 bytes
// Class: MUAraModelManager
// String references:
//   "plugInWrapper->_isEditorRenderer"
//   "regionSequence->getDocumentController() == plugInWrapper->_documentController"
//   "!plugInWrapper->getPlaybackRegionsForPreview()->getCount()"
//   "!plugInWrapper->_regionSequencesForPreview->containsObjectIdenticalTo(regionSequence)"
//   "provided object ref is invalid"
//   "call required from document main thread"


/* WARNING: Removing unreachable block (ram,0x016901f8) */
/* WARNING: Removing unreachable block (ram,0x01690201) */

void FUN_01690050(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (*(longlong *)(unaff_RDI + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      FUN_016aea20();
    }
    else if (*(char *)(unaff_RDI + 0xa6) == '\0') {
      FUN_016aea20();
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_012c91b0(), cVar2 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c89b0();
      lVar1 = *(longlong *)(unaff_RDI + 0x98);
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffc0 == lVar1) {
        if (*(int *)(*(longlong *)(unaff_RDI + 0xb8) + 0xc) == 0) {
          lVar1 = *(longlong *)(unaff_RDI + 0xb0);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (*(int *)(lVar1 + 0xc) != 0) {
            FUN_016aea20();
          }
          FUN_00d50b20();
        }
        cVar2 = FUN_00d24090();
        if (cVar2 == '\0') {
          FUN_01690310();
        }
        else {
          FUN_016aea20();
        }
      }
      else {
        FUN_016aea20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}


